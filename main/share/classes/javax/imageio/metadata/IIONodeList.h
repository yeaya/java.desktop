#ifndef _javax_imageio_metadata_IIONodeList_h_
#define _javax_imageio_metadata_IIONodeList_h_
//$ class javax.imageio.metadata.IIONodeList
//$ extends org.w3c.dom.NodeList

#include <org/w3c/dom/NodeList.h>

namespace java {
	namespace util {
		class List;
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

class IIONodeList : public ::org::w3c::dom::NodeList {
	$class(IIONodeList, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	IIONodeList();
	void init$(::java::util::List* nodes);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::java::util::List* nodes = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIONodeList_h_