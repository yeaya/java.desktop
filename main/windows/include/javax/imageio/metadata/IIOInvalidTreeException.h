#ifndef _javax_imageio_metadata_IIOInvalidTreeException_h_
#define _javax_imageio_metadata_IIOInvalidTreeException_h_
//$ class javax.imageio.metadata.IIOInvalidTreeException
//$ extends javax.imageio.IIOException

#include <javax/imageio/IIOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $import IIOInvalidTreeException : public ::javax::imageio::IIOException {
	$class(IIOInvalidTreeException, $NO_CLASS_INIT, ::javax::imageio::IIOException)
public:
	IIOInvalidTreeException();
	void init$($String* message, ::org::w3c::dom::Node* offendingNode);
	void init$($String* message, $Throwable* cause, ::org::w3c::dom::Node* offendingNode);
	virtual ::org::w3c::dom::Node* getOffendingNode();
	static const int64_t serialVersionUID = (int64_t)0xEDC370511F304957;
	::org::w3c::dom::Node* offendingNode = nullptr;
	IIOInvalidTreeException(const IIOInvalidTreeException& e);
	IIOInvalidTreeException wrapper$();
	virtual void throwWrapper$() override;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOInvalidTreeException_h_