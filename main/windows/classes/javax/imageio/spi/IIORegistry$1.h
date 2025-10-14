#ifndef _javax_imageio_spi_IIORegistry$1_h_
#define _javax_imageio_spi_IIORegistry$1_h_
//$ class javax.imageio.spi.IIORegistry$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace imageio {
		namespace spi {
			class IIORegistry;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class IIORegistry$1 : public ::java::security::PrivilegedAction {
	$class(IIORegistry$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	IIORegistry$1();
	void init$(::javax::imageio::spi::IIORegistry* this$0);
	virtual $Object* run() override;
	::javax::imageio::spi::IIORegistry* this$0 = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_IIORegistry$1_h_