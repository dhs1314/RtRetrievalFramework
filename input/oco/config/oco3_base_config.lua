------------------------------------------------------------
--- OCO-2 is almost the same as OCO-2. Right now, the
--- differences are a different EOF file and a different spectral
--- window

require "oco_base_config"
oco3_base_config_dir = ConfigCommon.local_dir()

Oco3BaseConfig = OcoBaseConfig:new {
   static_file = oco3_base_config_dir .. "/../input/l2_oco3_static_input.h5",

   static_eof_file = oco3_base_config_dir .. "/../input/l2_oco3_eof.h5",
}

--- Use land/water to select the EOFs. Might possibly get moved into
--- OcoBaseConfig, but for now OCO-2 and OCO-3 are different.
Oco3BaseConfig.fm.instrument.instrument_correction.creator = OcoConfig.instrument_correction_list_land_water
