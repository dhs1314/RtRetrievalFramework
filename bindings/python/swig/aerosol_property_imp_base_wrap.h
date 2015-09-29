/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_aerosol_property_imp_base_WRAP_H_
#define SWIG_aerosol_property_imp_base_WRAP_H_

#include <map>
#include <string>


class SwigDirector_AerosolPropertyImpBase : public FullPhysics::AerosolPropertyImpBase, public Swig::Director {

public:
    SwigDirector_AerosolPropertyImpBase(PyObject *self);
    SwigDirector_AerosolPropertyImpBase(PyObject *self, blitz::Array< double,1 > const &Coeff, blitz::Array< bool,1 > const &Used_flag);
    virtual ~SwigDirector_AerosolPropertyImpBase();
    virtual void notify_add(FullPhysics::StateVector &Observed_object);
    virtual void notify_remove(FullPhysics::StateVector &Observed_object);
    virtual void notify_update(FullPhysics::StateVector const &Observed_object);
    virtual void mark_used(FullPhysics::StateVector const &Sv, blitz::Array< bool,1 > &Used) const;
    virtual void state_vector_name(FullPhysics::StateVector const &Sv, blitz::Array< std::string,1 > &Sv_name) const;
    virtual void add_observer(FullPhysics::Observer< FullPhysics::AerosolProperty > &Obs);
    virtual void remove_observer(FullPhysics::Observer< FullPhysics::AerosolProperty > &Obs);
    virtual boost::shared_ptr< FullPhysics::AerosolProperty > clone() const;
    virtual double extinction_coefficient(double wn) const;
    virtual double scattering_coefficient(double wn) const;
    virtual blitz::Array< double,2 > phase_function_moment(double wn, int nmom = -1, int nscatt = -1) const;
    virtual void update_sub_state(FullPhysics::ArrayAd< double,1 > const &Sv_sub, blitz::Array< double,2 > const &Cov_sub);
    virtual void mark_used_sub(blitz::Array< bool,1 > &Used) const;
    virtual void state_vector_name_sub(blitz::Array< std::string,1 > &Sv_name) const;
    virtual void print(std::ostream &Os) const;
    virtual std::string state_vector_name_i(int i) const;
    virtual void update_sub_state_hook();
    virtual std::string desc() const;
    using FullPhysics::AerosolPropertyImpBase::init;


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* swig_protected_method_name, bool val) const
    { swig_inner[swig_protected_method_name] = val;}

private:
    mutable std::map<std::string, bool> swig_inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class AerosolPropertyImpBase doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[19];
#endif

};


#endif
