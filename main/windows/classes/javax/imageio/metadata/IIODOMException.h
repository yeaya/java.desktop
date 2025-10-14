#ifndef _javax_imageio_metadata_IIODOMException_h_
#define _javax_imageio_metadata_IIODOMException_h_
//$ class javax.imageio.metadata.IIODOMException
//$ extends org.w3c.dom.DOMException

#include <org/w3c/dom/DOMException.h>

namespace javax {
	namespace imageio {
		namespace metadata {

class IIODOMException : public ::org::w3c::dom::DOMException {
	$class(IIODOMException, $NO_CLASS_INIT, ::org::w3c::dom::DOMException)
public:
	IIODOMException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0xC35C61AD2B9A6954;
	IIODOMException(const IIODOMException& e);
	IIODOMException wrapper$();
	virtual void throwWrapper$() override;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIODOMException_h_