#ifndef _javax_imageio_metadata_IIONamedNodeMap_h_
#define _javax_imageio_metadata_IIONamedNodeMap_h_
//$ class javax.imageio.metadata.IIONamedNodeMap
//$ extends org.w3c.dom.NamedNodeMap

#include <org/w3c/dom/NamedNodeMap.h>

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

class IIONamedNodeMap : public ::org::w3c::dom::NamedNodeMap {
	$class(IIONamedNodeMap, $NO_CLASS_INIT, ::org::w3c::dom::NamedNodeMap)
public:
	IIONamedNodeMap();
	void init$(::java::util::List* nodes);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* getNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* arg) override;
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) override;
	::java::util::List* nodes = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIONamedNodeMap_h_