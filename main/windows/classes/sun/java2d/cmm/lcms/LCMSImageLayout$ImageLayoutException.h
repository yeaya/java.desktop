#ifndef _sun_java2d_cmm_lcms_LCMSImageLayout$ImageLayoutException_h_
#define _sun_java2d_cmm_lcms_LCMSImageLayout$ImageLayoutException_h_
//$ class sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSImageLayout$ImageLayoutException : public ::java::lang::Exception {
	$class(LCMSImageLayout$ImageLayoutException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	LCMSImageLayout$ImageLayoutException();
	void init$($String* message);
	LCMSImageLayout$ImageLayoutException(const LCMSImageLayout$ImageLayoutException& e);
	LCMSImageLayout$ImageLayoutException wrapper$();
	virtual void throwWrapper$() override;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_lcms_LCMSImageLayout$ImageLayoutException_h_