#ifndef _com_sun_beans_decoder_DocumentHandler_h_
#define _com_sun_beans_decoder_DocumentHandler_h_
//$ class com.sun.beans.decoder.DocumentHandler
//$ extends org.xml.sax.helpers.DefaultHandler

#include <java/lang/Array.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class ElementHandler;
			}
		}
	}
}
namespace java {
	namespace beans {
		class ExceptionListener;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Exception;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class DocumentHandler : public ::org::xml::sax::helpers::DefaultHandler {
	$class(DocumentHandler, $NO_CLASS_INIT, ::org::xml::sax::helpers::DefaultHandler)
public:
	DocumentHandler();
	void init$();
	void addObject(Object$* object);
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	$Class* findClass($String* name);
	::java::lang::ClassLoader* getClassLoader();
	$Class* getElementHandler($String* name);
	::java::beans::ExceptionListener* getExceptionListener();
	$ObjectArray* getObjects();
	$Object* getOwner();
	$Object* getVariable($String* id);
	void handleException(::java::lang::Exception* exception);
	bool hasVariable($String* id);
	void parse(::org::xml::sax::InputSource* input);
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	void setClassLoader(::java::lang::ClassLoader* loader);
	void setElementHandler($String* name, $Class* handler);
	void setExceptionListener(::java::beans::ExceptionListener* listener);
	void setOwner(Object$* owner);
	void setVariable($String* id, Object$* value);
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	::java::security::AccessControlContext* acc = nullptr;
	::java::util::Map* handlers = nullptr;
	::java::util::Map* environment = nullptr;
	::java::util::List* objects = nullptr;
	::java::lang::ref::Reference* loader = nullptr;
	::java::beans::ExceptionListener* listener = nullptr;
	$Object* owner = nullptr;
	::com::sun::beans::decoder::ElementHandler* handler = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_DocumentHandler_h_