#ifndef _com_sun_beans_decoder_ElementHandler_h_
#define _com_sun_beans_decoder_ElementHandler_h_
//$ class com.sun.beans.decoder.ElementHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class DocumentHandler;
				class ValueObject;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ElementHandler : public ::java::lang::Object {
	$class(ElementHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementHandler();
	void init$();
	virtual void addArgument(Object$* argument);
	virtual void addAttribute($String* name, $String* value);
	virtual void addCharacter(char16_t ch);
	virtual void endElement();
	virtual $Object* getContextBean();
	::com::sun::beans::decoder::DocumentHandler* getOwner();
	::com::sun::beans::decoder::ElementHandler* getParent();
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() {return nullptr;}
	$Object* getVariable($String* id);
	virtual bool isArgument();
	void setOwner(::com::sun::beans::decoder::DocumentHandler* owner);
	void setParent(::com::sun::beans::decoder::ElementHandler* parent);
	virtual void startElement();
	::com::sun::beans::decoder::DocumentHandler* owner = nullptr;
	::com::sun::beans::decoder::ElementHandler* parent = nullptr;
	$String* id = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ElementHandler_h_