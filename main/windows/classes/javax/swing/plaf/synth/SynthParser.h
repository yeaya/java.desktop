#ifndef _javax_swing_plaf_synth_SynthParser_h_
#define _javax_swing_plaf_synth_SynthParser_h_
//$ class javax.swing.plaf.synth.SynthParser
//$ extends org.xml.sax.helpers.DefaultHandler

#include <java/lang/Array.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

#pragma push_macro("ATTRIBUTE_ACTION")
#undef ATTRIBUTE_ACTION
#pragma push_macro("ATTRIBUTE_BOTTOM")
#undef ATTRIBUTE_BOTTOM
#pragma push_macro("ATTRIBUTE_CENTER")
#undef ATTRIBUTE_CENTER
#pragma push_macro("ATTRIBUTE_CLONE")
#undef ATTRIBUTE_CLONE
#pragma push_macro("ATTRIBUTE_DEST_INSETS")
#undef ATTRIBUTE_DEST_INSETS
#pragma push_macro("ATTRIBUTE_DIRECTION")
#undef ATTRIBUTE_DIRECTION
#pragma push_macro("ATTRIBUTE_ID")
#undef ATTRIBUTE_ID
#pragma push_macro("ATTRIBUTE_IDREF")
#undef ATTRIBUTE_IDREF
#pragma push_macro("ATTRIBUTE_KEY")
#undef ATTRIBUTE_KEY
#pragma push_macro("ATTRIBUTE_LEFT")
#undef ATTRIBUTE_LEFT
#pragma push_macro("ATTRIBUTE_METHOD")
#undef ATTRIBUTE_METHOD
#pragma push_macro("ATTRIBUTE_NAME")
#undef ATTRIBUTE_NAME
#pragma push_macro("ATTRIBUTE_PAINT_CENTER")
#undef ATTRIBUTE_PAINT_CENTER
#pragma push_macro("ATTRIBUTE_PATH")
#undef ATTRIBUTE_PATH
#pragma push_macro("ATTRIBUTE_RIGHT")
#undef ATTRIBUTE_RIGHT
#pragma push_macro("ATTRIBUTE_SIZE")
#undef ATTRIBUTE_SIZE
#pragma push_macro("ATTRIBUTE_SOURCE_INSETS")
#undef ATTRIBUTE_SOURCE_INSETS
#pragma push_macro("ATTRIBUTE_STRETCH")
#undef ATTRIBUTE_STRETCH
#pragma push_macro("ATTRIBUTE_STYLE")
#undef ATTRIBUTE_STYLE
#pragma push_macro("ATTRIBUTE_TOP")
#undef ATTRIBUTE_TOP
#pragma push_macro("ATTRIBUTE_TYPE")
#undef ATTRIBUTE_TYPE
#pragma push_macro("ATTRIBUTE_VALUE")
#undef ATTRIBUTE_VALUE
#pragma push_macro("ELEMENT_BIND")
#undef ELEMENT_BIND
#pragma push_macro("ELEMENT_BIND_KEY")
#undef ELEMENT_BIND_KEY
#pragma push_macro("ELEMENT_COLOR")
#undef ELEMENT_COLOR
#pragma push_macro("ELEMENT_DEFAULTS_PROPERTY")
#undef ELEMENT_DEFAULTS_PROPERTY
#pragma push_macro("ELEMENT_FONT")
#undef ELEMENT_FONT
#pragma push_macro("ELEMENT_IMAGE_ICON")
#undef ELEMENT_IMAGE_ICON
#pragma push_macro("ELEMENT_IMAGE_PAINTER")
#undef ELEMENT_IMAGE_PAINTER
#pragma push_macro("ELEMENT_INPUT_MAP")
#undef ELEMENT_INPUT_MAP
#pragma push_macro("ELEMENT_INSETS")
#undef ELEMENT_INSETS
#pragma push_macro("ELEMENT_OPAQUE")
#undef ELEMENT_OPAQUE
#pragma push_macro("ELEMENT_PAINTER")
#undef ELEMENT_PAINTER
#pragma push_macro("ELEMENT_PROPERTY")
#undef ELEMENT_PROPERTY
#pragma push_macro("ELEMENT_STATE")
#undef ELEMENT_STATE
#pragma push_macro("ELEMENT_STYLE")
#undef ELEMENT_STYLE
#pragma push_macro("ELEMENT_SYNTH")
#undef ELEMENT_SYNTH
#pragma push_macro("ELEMENT_SYNTH_GRAPHICS")
#undef ELEMENT_SYNTH_GRAPHICS

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class DocumentHandler;
			}
		}
	}
}
namespace java {
	namespace awt {
		class Insets;
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class StringTokenizer;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class DefaultSynthStyleFactory;
				class ParsedSynthStyle;
				class ParsedSynthStyle$StateInfo;
				class SynthPainter;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
			class Locator;
			class SAXParseException;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthParser : public ::org::xml::sax::helpers::DefaultHandler {
	$class(SynthParser, 0, ::org::xml::sax::helpers::DefaultHandler)
public:
	SynthParser();
	void init$();
	void addPainterOrMerge(::java::util::List* painters, $String* method, ::javax::swing::plaf::synth::SynthPainter* painter, int32_t direction);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	$Object* checkCast(Object$* value, $Class* type);
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* local, $String* name) override;
	void endInputMap();
	void endState();
	void endStyle();
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	::com::sun::beans::decoder::DocumentHandler* getHandler();
	::java::net::URL* getResource($String* path);
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	bool isForwarding();
	$Object* lookup($String* key, $Class* type);
	int32_t nextInt(::java::util::StringTokenizer* tok, $String* errorMsg);
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void parse(::java::io::InputStream* inputStream, ::javax::swing::plaf::synth::DefaultSynthStyleFactory* factory, ::java::net::URL* urlResourceBase, $Class* classResourceBase, ::java::util::Map* defaultsMap);
	::java::awt::Insets* parseInsets($String* insets, $String* errorMsg);
	virtual void processingInstruction($String* target, $String* data) override;
	void register$($String* key, Object$* value);
	void reset();
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	void startBind(::org::xml::sax::Attributes* attributes);
	void startBindKey(::org::xml::sax::Attributes* attributes);
	void startColor(::org::xml::sax::Attributes* attributes);
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* local, $String* name, ::org::xml::sax::Attributes* attributes) override;
	void startFont(::org::xml::sax::Attributes* attributes);
	void startGraphics(::org::xml::sax::Attributes* attributes);
	void startImageIcon(::org::xml::sax::Attributes* attributes);
	void startInputMap(::org::xml::sax::Attributes* attributes);
	void startInsets(::org::xml::sax::Attributes* attributes);
	void startOpaque(::org::xml::sax::Attributes* attributes);
	void startPainter(::org::xml::sax::Attributes* attributes, $String* type);
	void startProperty(::org::xml::sax::Attributes* attributes, Object$* property);
	void startState(::org::xml::sax::Attributes* attributes);
	void startStyle(::org::xml::sax::Attributes* attributes);
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	static bool $assertionsDisabled;
	static $String* ELEMENT_SYNTH;
	static $String* ELEMENT_STYLE;
	static $String* ELEMENT_STATE;
	static $String* ELEMENT_FONT;
	static $String* ELEMENT_COLOR;
	static $String* ELEMENT_IMAGE_PAINTER;
	static $String* ELEMENT_PAINTER;
	static $String* ELEMENT_PROPERTY;
	static $String* ELEMENT_SYNTH_GRAPHICS;
	static $String* ELEMENT_IMAGE_ICON;
	static $String* ELEMENT_BIND;
	static $String* ELEMENT_BIND_KEY;
	static $String* ELEMENT_INSETS;
	static $String* ELEMENT_OPAQUE;
	static $String* ELEMENT_DEFAULTS_PROPERTY;
	static $String* ELEMENT_INPUT_MAP;
	static $String* ATTRIBUTE_ACTION;
	static $String* ATTRIBUTE_ID;
	static $String* ATTRIBUTE_IDREF;
	static $String* ATTRIBUTE_CLONE;
	static $String* ATTRIBUTE_VALUE;
	static $String* ATTRIBUTE_NAME;
	static $String* ATTRIBUTE_STYLE;
	static $String* ATTRIBUTE_SIZE;
	static $String* ATTRIBUTE_TYPE;
	static $String* ATTRIBUTE_TOP;
	static $String* ATTRIBUTE_LEFT;
	static $String* ATTRIBUTE_BOTTOM;
	static $String* ATTRIBUTE_RIGHT;
	static $String* ATTRIBUTE_KEY;
	static $String* ATTRIBUTE_SOURCE_INSETS;
	static $String* ATTRIBUTE_DEST_INSETS;
	static $String* ATTRIBUTE_PATH;
	static $String* ATTRIBUTE_STRETCH;
	static $String* ATTRIBUTE_PAINT_CENTER;
	static $String* ATTRIBUTE_METHOD;
	static $String* ATTRIBUTE_DIRECTION;
	static $String* ATTRIBUTE_CENTER;
	::com::sun::beans::decoder::DocumentHandler* _handler = nullptr;
	int32_t _depth = 0;
	::javax::swing::plaf::synth::DefaultSynthStyleFactory* _factory = nullptr;
	::java::util::List* _stateInfos = nullptr;
	::javax::swing::plaf::synth::ParsedSynthStyle* _style = nullptr;
	::javax::swing::plaf::synth::ParsedSynthStyle$StateInfo* _stateInfo = nullptr;
	::java::util::List* _inputMapBindings = nullptr;
	$String* _inputMapID = nullptr;
	::java::util::Map* _mapping = nullptr;
	::java::net::URL* _urlResourceBase = nullptr;
	$Class* _classResourceBase = nullptr;
	::java::util::List* _colorTypes = nullptr;
	::java::util::Map* _defaultsMap = nullptr;
	::java::util::List* _stylePainters = nullptr;
	::java::util::List* _statePainters = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ATTRIBUTE_ACTION")
#pragma pop_macro("ATTRIBUTE_BOTTOM")
#pragma pop_macro("ATTRIBUTE_CENTER")
#pragma pop_macro("ATTRIBUTE_CLONE")
#pragma pop_macro("ATTRIBUTE_DEST_INSETS")
#pragma pop_macro("ATTRIBUTE_DIRECTION")
#pragma pop_macro("ATTRIBUTE_ID")
#pragma pop_macro("ATTRIBUTE_IDREF")
#pragma pop_macro("ATTRIBUTE_KEY")
#pragma pop_macro("ATTRIBUTE_LEFT")
#pragma pop_macro("ATTRIBUTE_METHOD")
#pragma pop_macro("ATTRIBUTE_NAME")
#pragma pop_macro("ATTRIBUTE_PAINT_CENTER")
#pragma pop_macro("ATTRIBUTE_PATH")
#pragma pop_macro("ATTRIBUTE_RIGHT")
#pragma pop_macro("ATTRIBUTE_SIZE")
#pragma pop_macro("ATTRIBUTE_SOURCE_INSETS")
#pragma pop_macro("ATTRIBUTE_STRETCH")
#pragma pop_macro("ATTRIBUTE_STYLE")
#pragma pop_macro("ATTRIBUTE_TOP")
#pragma pop_macro("ATTRIBUTE_TYPE")
#pragma pop_macro("ATTRIBUTE_VALUE")
#pragma pop_macro("ELEMENT_BIND")
#pragma pop_macro("ELEMENT_BIND_KEY")
#pragma pop_macro("ELEMENT_COLOR")
#pragma pop_macro("ELEMENT_DEFAULTS_PROPERTY")
#pragma pop_macro("ELEMENT_FONT")
#pragma pop_macro("ELEMENT_IMAGE_ICON")
#pragma pop_macro("ELEMENT_IMAGE_PAINTER")
#pragma pop_macro("ELEMENT_INPUT_MAP")
#pragma pop_macro("ELEMENT_INSETS")
#pragma pop_macro("ELEMENT_OPAQUE")
#pragma pop_macro("ELEMENT_PAINTER")
#pragma pop_macro("ELEMENT_PROPERTY")
#pragma pop_macro("ELEMENT_STATE")
#pragma pop_macro("ELEMENT_STYLE")
#pragma pop_macro("ELEMENT_SYNTH")
#pragma pop_macro("ELEMENT_SYNTH_GRAPHICS")

#endif // _javax_swing_plaf_synth_SynthParser_h_