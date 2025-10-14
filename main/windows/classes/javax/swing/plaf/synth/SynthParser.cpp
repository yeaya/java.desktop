#include <javax/swing/plaf/synth/SynthParser.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/SecureClassLoader.h>
#include <java/text/ParseException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/DefaultSynthStyleFactory.h>
#include <javax/swing/plaf/synth/ImagePainter.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$StateInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthParser$LazyImageIcon.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <jcpp.h>

#undef ATTRIBUTE_ACTION
#undef ATTRIBUTE_BOTTOM
#undef ATTRIBUTE_CENTER
#undef ATTRIBUTE_CLONE
#undef ATTRIBUTE_DEST_INSETS
#undef ATTRIBUTE_DIRECTION
#undef ATTRIBUTE_ID
#undef ATTRIBUTE_IDREF
#undef ATTRIBUTE_KEY
#undef ATTRIBUTE_LEFT
#undef ATTRIBUTE_METHOD
#undef ATTRIBUTE_NAME
#undef ATTRIBUTE_PAINT_CENTER
#undef ATTRIBUTE_PATH
#undef ATTRIBUTE_RIGHT
#undef ATTRIBUTE_SIZE
#undef ATTRIBUTE_SOURCE_INSETS
#undef ATTRIBUTE_STRETCH
#undef ATTRIBUTE_STYLE
#undef ATTRIBUTE_TOP
#undef ATTRIBUTE_TYPE
#undef ATTRIBUTE_VALUE
#undef BOLD
#undef BOTTOM
#undef DEFAULT
#undef DISABLED
#undef EAST
#undef ELEMENT_BIND
#undef ELEMENT_BIND_KEY
#undef ELEMENT_COLOR
#undef ELEMENT_DEFAULTS_PROPERTY
#undef ELEMENT_FONT
#undef ELEMENT_IMAGE_ICON
#undef ELEMENT_IMAGE_PAINTER
#undef ELEMENT_INPUT_MAP
#undef ELEMENT_INSETS
#undef ELEMENT_OPAQUE
#undef ELEMENT_PAINTER
#undef ELEMENT_PROPERTY
#undef ELEMENT_STATE
#undef ELEMENT_STYLE
#undef ELEMENT_SYNTH
#undef ELEMENT_SYNTH_GRAPHICS
#undef ENABLED
#undef ENGLISH
#undef FOCUSED
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef ITALIC
#undef LEFT
#undef MOUSE_OVER
#undef NAME
#undef NORTH
#undef PLAIN
#undef PRESSED
#undef REGION
#undef RIGHT
#undef SELECTED
#undef SOUTH
#undef TOP
#undef VERTICAL
#undef VERTICAL_SPLIT
#undef WEST

using $ColorArray = $Array<::java::awt::Color>;
using $URLArray = $Array<::java::net::URL>;
using $ParsedSynthStyle$PainterInfoArray = $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>;
using $ParsedSynthStyle$StateInfoArray = $Array<::javax::swing::plaf::synth::ParsedSynthStyle$StateInfo>;
using $DefaultSynthStyle$StateInfoArray = $Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>;
using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Field = ::java::lang::reflect::Field;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $ParseException = ::java::text::ParseException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $DefaultSynthStyleFactory = ::javax::swing::plaf::synth::DefaultSynthStyleFactory;
using $ImagePainter = ::javax::swing::plaf::synth::ImagePainter;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $ParsedSynthStyle$PainterInfo = ::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo;
using $ParsedSynthStyle$StateInfo = ::javax::swing::plaf::synth::ParsedSynthStyle$StateInfo;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthParser$LazyImageIcon = ::javax::swing::plaf::synth::SynthParser$LazyImageIcon;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $Attributes = ::org::xml::sax::Attributes;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $DefaultSynthStyle = ::sun::swing::plaf::synth::DefaultSynthStyle;
using $DefaultSynthStyle$StateInfo = ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthParser_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthParser, $assertionsDisabled)},
	{"ELEMENT_SYNTH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_SYNTH)},
	{"ELEMENT_STYLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_STYLE)},
	{"ELEMENT_STATE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_STATE)},
	{"ELEMENT_FONT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_FONT)},
	{"ELEMENT_COLOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_COLOR)},
	{"ELEMENT_IMAGE_PAINTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_IMAGE_PAINTER)},
	{"ELEMENT_PAINTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_PAINTER)},
	{"ELEMENT_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_PROPERTY)},
	{"ELEMENT_SYNTH_GRAPHICS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_SYNTH_GRAPHICS)},
	{"ELEMENT_IMAGE_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_IMAGE_ICON)},
	{"ELEMENT_BIND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_BIND)},
	{"ELEMENT_BIND_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_BIND_KEY)},
	{"ELEMENT_INSETS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_INSETS)},
	{"ELEMENT_OPAQUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_OPAQUE)},
	{"ELEMENT_DEFAULTS_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_DEFAULTS_PROPERTY)},
	{"ELEMENT_INPUT_MAP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ELEMENT_INPUT_MAP)},
	{"ATTRIBUTE_ACTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_ACTION)},
	{"ATTRIBUTE_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_ID)},
	{"ATTRIBUTE_IDREF", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_IDREF)},
	{"ATTRIBUTE_CLONE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_CLONE)},
	{"ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_VALUE)},
	{"ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_NAME)},
	{"ATTRIBUTE_STYLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_STYLE)},
	{"ATTRIBUTE_SIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_SIZE)},
	{"ATTRIBUTE_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_TYPE)},
	{"ATTRIBUTE_TOP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_TOP)},
	{"ATTRIBUTE_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_LEFT)},
	{"ATTRIBUTE_BOTTOM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_BOTTOM)},
	{"ATTRIBUTE_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_RIGHT)},
	{"ATTRIBUTE_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_KEY)},
	{"ATTRIBUTE_SOURCE_INSETS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_SOURCE_INSETS)},
	{"ATTRIBUTE_DEST_INSETS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_DEST_INSETS)},
	{"ATTRIBUTE_PATH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_PATH)},
	{"ATTRIBUTE_STRETCH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_STRETCH)},
	{"ATTRIBUTE_PAINT_CENTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_PAINT_CENTER)},
	{"ATTRIBUTE_METHOD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_METHOD)},
	{"ATTRIBUTE_DIRECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_DIRECTION)},
	{"ATTRIBUTE_CENTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthParser, ATTRIBUTE_CENTER)},
	{"_handler", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PRIVATE, $field(SynthParser, _handler)},
	{"_depth", "I", nullptr, $PRIVATE, $field(SynthParser, _depth)},
	{"_factory", "Ljavax/swing/plaf/synth/DefaultSynthStyleFactory;", nullptr, $PRIVATE, $field(SynthParser, _factory)},
	{"_stateInfos", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/ParsedSynthStyle$StateInfo;>;", $PRIVATE, $field(SynthParser, _stateInfos)},
	{"_style", "Ljavax/swing/plaf/synth/ParsedSynthStyle;", nullptr, $PRIVATE, $field(SynthParser, _style)},
	{"_stateInfo", "Ljavax/swing/plaf/synth/ParsedSynthStyle$StateInfo;", nullptr, $PRIVATE, $field(SynthParser, _stateInfo)},
	{"_inputMapBindings", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SynthParser, _inputMapBindings)},
	{"_inputMapID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthParser, _inputMapID)},
	{"_mapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(SynthParser, _mapping)},
	{"_urlResourceBase", "Ljava/net/URL;", nullptr, $PRIVATE, $field(SynthParser, _urlResourceBase)},
	{"_classResourceBase", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(SynthParser, _classResourceBase)},
	{"_colorTypes", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/ColorType;>;", $PRIVATE, $field(SynthParser, _colorTypes)},
	{"_defaultsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(SynthParser, _defaultsMap)},
	{"_stylePainters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;>;", $PRIVATE, $field(SynthParser, _stylePainters)},
	{"_statePainters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;>;", $PRIVATE, $field(SynthParser, _statePainters)},
	{}
};

$MethodInfo _SynthParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynthParser::*)()>(&SynthParser::init$))},
	{"addPainterOrMerge", "(Ljava/util/List;Ljava/lang/String;Ljavax/swing/plaf/synth/SynthPainter;I)V", "(Ljava/util/List<Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;>;Ljava/lang/String;Ljavax/swing/plaf/synth/SynthPainter;I)V", $PRIVATE, $method(static_cast<void(SynthParser::*)($List*,$String*,$SynthPainter*,int32_t)>(&SynthParser::addPainterOrMerge))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"checkCast", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(SynthParser::*)(Object$*,$Class*)>(&SynthParser::checkCast)), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endInputMap", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)()>(&SynthParser::endInputMap)), "org.xml.sax.SAXException"},
	{"endState", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)()>(&SynthParser::endState))},
	{"endStyle", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)()>(&SynthParser::endStyle))},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getHandler", "()Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PRIVATE, $method(static_cast<$DocumentHandler*(SynthParser::*)()>(&SynthParser::getHandler))},
	{"getResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PRIVATE, $method(static_cast<$URL*(SynthParser::*)($String*)>(&SynthParser::getResource))},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"isForwarding", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SynthParser::*)()>(&SynthParser::isForwarding))},
	{"lookup", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(SynthParser::*)($String*,$Class*)>(&SynthParser::lookup)), "org.xml.sax.SAXException"},
	{"nextInt", "(Ljava/util/StringTokenizer;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthParser::*)($StringTokenizer*,$String*)>(&SynthParser::nextInt)), "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"parse", "(Ljava/io/InputStream;Ljavax/swing/plaf/synth/DefaultSynthStyleFactory;Ljava/net/URL;Ljava/lang/Class;Ljava/util/Map;)V", "(Ljava/io/InputStream;Ljavax/swing/plaf/synth/DefaultSynthStyleFactory;Ljava/net/URL;Ljava/lang/Class<*>;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, nullptr, "java.text.ParseException,java.lang.IllegalArgumentException"},
	{"parseInsets", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(SynthParser::*)($String*,$String*)>(&SynthParser::parseInsets)), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"register", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($String*,Object$*)>(&SynthParser::register$)), "org.xml.sax.SAXException"},
	{"reset", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)()>(&SynthParser::reset))},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, nullptr, "java.io.IOException,org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"startBind", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startBind)), "org.xml.sax.SAXException"},
	{"startBindKey", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startBindKey)), "org.xml.sax.SAXException"},
	{"startColor", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startColor)), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startFont", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startFont)), "org.xml.sax.SAXException"},
	{"startGraphics", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startGraphics)), "org.xml.sax.SAXException"},
	{"startImageIcon", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startImageIcon)), "org.xml.sax.SAXException"},
	{"startInputMap", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startInputMap)), "org.xml.sax.SAXException"},
	{"startInsets", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startInsets)), "org.xml.sax.SAXException"},
	{"startOpaque", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startOpaque))},
	{"startPainter", "(Lorg/xml/sax/Attributes;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*,$String*)>(&SynthParser::startPainter)), "org.xml.sax.SAXException"},
	{"startProperty", "(Lorg/xml/sax/Attributes;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*,Object$*)>(&SynthParser::startProperty)), "org.xml.sax.SAXException"},
	{"startState", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startState)), "org.xml.sax.SAXException"},
	{"startStyle", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthParser::*)($Attributes*)>(&SynthParser::startStyle)), "org.xml.sax.SAXException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _SynthParser_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthParser$LazyImageIcon", "javax.swing.plaf.synth.SynthParser", "LazyImageIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthParser",
	"org.xml.sax.helpers.DefaultHandler",
	nullptr,
	_SynthParser_FieldInfo_,
	_SynthParser_MethodInfo_,
	nullptr,
	nullptr,
	_SynthParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthParser$LazyImageIcon"
};

$Object* allocate$SynthParser($Class* clazz) {
	return $of($alloc(SynthParser));
}

bool SynthParser::$assertionsDisabled = false;
$String* SynthParser::ELEMENT_SYNTH = nullptr;
$String* SynthParser::ELEMENT_STYLE = nullptr;
$String* SynthParser::ELEMENT_STATE = nullptr;
$String* SynthParser::ELEMENT_FONT = nullptr;
$String* SynthParser::ELEMENT_COLOR = nullptr;
$String* SynthParser::ELEMENT_IMAGE_PAINTER = nullptr;
$String* SynthParser::ELEMENT_PAINTER = nullptr;
$String* SynthParser::ELEMENT_PROPERTY = nullptr;
$String* SynthParser::ELEMENT_SYNTH_GRAPHICS = nullptr;
$String* SynthParser::ELEMENT_IMAGE_ICON = nullptr;
$String* SynthParser::ELEMENT_BIND = nullptr;
$String* SynthParser::ELEMENT_BIND_KEY = nullptr;
$String* SynthParser::ELEMENT_INSETS = nullptr;
$String* SynthParser::ELEMENT_OPAQUE = nullptr;
$String* SynthParser::ELEMENT_DEFAULTS_PROPERTY = nullptr;
$String* SynthParser::ELEMENT_INPUT_MAP = nullptr;
$String* SynthParser::ATTRIBUTE_ACTION = nullptr;
$String* SynthParser::ATTRIBUTE_ID = nullptr;
$String* SynthParser::ATTRIBUTE_IDREF = nullptr;
$String* SynthParser::ATTRIBUTE_CLONE = nullptr;
$String* SynthParser::ATTRIBUTE_VALUE = nullptr;
$String* SynthParser::ATTRIBUTE_NAME = nullptr;
$String* SynthParser::ATTRIBUTE_STYLE = nullptr;
$String* SynthParser::ATTRIBUTE_SIZE = nullptr;
$String* SynthParser::ATTRIBUTE_TYPE = nullptr;
$String* SynthParser::ATTRIBUTE_TOP = nullptr;
$String* SynthParser::ATTRIBUTE_LEFT = nullptr;
$String* SynthParser::ATTRIBUTE_BOTTOM = nullptr;
$String* SynthParser::ATTRIBUTE_RIGHT = nullptr;
$String* SynthParser::ATTRIBUTE_KEY = nullptr;
$String* SynthParser::ATTRIBUTE_SOURCE_INSETS = nullptr;
$String* SynthParser::ATTRIBUTE_DEST_INSETS = nullptr;
$String* SynthParser::ATTRIBUTE_PATH = nullptr;
$String* SynthParser::ATTRIBUTE_STRETCH = nullptr;
$String* SynthParser::ATTRIBUTE_PAINT_CENTER = nullptr;
$String* SynthParser::ATTRIBUTE_METHOD = nullptr;
$String* SynthParser::ATTRIBUTE_DIRECTION = nullptr;
$String* SynthParser::ATTRIBUTE_CENTER = nullptr;

void SynthParser::init$() {
	$DefaultHandler::init$();
	$set(this, _mapping, $new($HashMap));
	$set(this, _stateInfos, $new($ArrayList));
	$set(this, _colorTypes, $new($ArrayList));
	$set(this, _inputMapBindings, $new($ArrayList));
	$set(this, _stylePainters, $new($ArrayList));
	$set(this, _statePainters, $new($ArrayList));
}

void SynthParser::parse($InputStream* inputStream, $DefaultSynthStyleFactory* factory, $URL* urlResourceBase, $Class* classResourceBase, $Map* defaultsMap) {
	if (inputStream == nullptr || factory == nullptr || (urlResourceBase == nullptr && classResourceBase == nullptr)) {
		$throwNew($IllegalArgumentException, "You must supply an InputStream, StyleFactory and Class or URL"_s);
	}
	if (!SynthParser::$assertionsDisabled && !(!(urlResourceBase != nullptr && classResourceBase != nullptr))) {
		$throwNew($AssertionError);
	}
	$set(this, _factory, factory);
	$set(this, _classResourceBase, classResourceBase);
	$set(this, _urlResourceBase, urlResourceBase);
	$set(this, _defaultsMap, defaultsMap);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($SAXParser, saxParser, $nc($($SAXParserFactory::newInstance()))->newSAXParser());
				$nc(saxParser)->parse(static_cast<$InputStream*>($$new($BufferedInputStream, inputStream)), static_cast<$DefaultHandler*>(this));
			} catch ($ParserConfigurationException&) {
				$var($ParserConfigurationException, e, $catch());
				$throwNew($ParseException, $$str({"Error parsing: "_s, e}), 0);
			} catch ($SAXException&) {
				$var($SAXException, se, $catch());
				$var($String, var$1, $$str({"Error parsing: "_s, se, " "_s}));
				$throwNew($ParseException, $$concat(var$1, $(se->getException())), 0);
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$throwNew($ParseException, $$str({"Error parsing: "_s, ioe}), 0);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			reset();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$URL* SynthParser::getResource($String* path) {
	$beforeCallerSensitive();
	if (this->_classResourceBase != nullptr) {
		return $nc(this->_classResourceBase)->getResource(path);
	} else {
		try {
			return $new($URL, this->_urlResourceBase, path);
		} catch ($MalformedURLException&) {
			$var($MalformedURLException, mue, $catch());
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

void SynthParser::reset() {
	$set(this, _handler, nullptr);
	this->_depth = 0;
	$nc(this->_mapping)->clear();
	$nc(this->_stateInfos)->clear();
	$nc(this->_colorTypes)->clear();
	$nc(this->_statePainters)->clear();
	$nc(this->_stylePainters)->clear();
}

bool SynthParser::isForwarding() {
	return (this->_depth > 0);
}

$DocumentHandler* SynthParser::getHandler() {
	$beforeCallerSensitive();
	if (this->_handler == nullptr) {
		$set(this, _handler, $new($DocumentHandler));
		if (this->_urlResourceBase != nullptr) {
			$var($URLArray, urls, $new($URLArray, {$(getResource("."_s))}));
			$var($ClassLoader, parent, $($Thread::currentThread())->getContextClassLoader());
			$var($ClassLoader, urlLoader, $new($URLClassLoader, urls, parent));
			$nc(this->_handler)->setClassLoader(urlLoader);
		} else {
			$nc(this->_handler)->setClassLoader($($nc(this->_classResourceBase)->getClassLoader()));
		}
		{
			$var($Iterator, i$, $nc($($nc(this->_mapping)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					$nc(this->_handler)->setVariable(key, $($nc(this->_mapping)->get(key)));
				}
			}
		}
	}
	return this->_handler;
}

$Object* SynthParser::checkCast(Object$* value, $Class* type) {
	if (!$nc(type)->isInstance(value)) {
		$var($String, var$0, $$str({"Expected type "_s, type, " got "_s}));
		$throwNew($SAXException, $$concat(var$0, $($nc($of(value))->getClass())));
	}
	return $of(value);
}

$Object* SynthParser::lookup($String* key, $Class* type) {
	$var($Object, value, nullptr);
	if (this->_handler != nullptr) {
		if ($nc(this->_handler)->hasVariable(key)) {
			return $of(checkCast($($nc(this->_handler)->getVariable(key)), type));
		}
	}
	$assign(value, $nc(this->_mapping)->get(key));
	if (value == nullptr) {
		$throwNew($SAXException, $$str({"ID "_s, key, " has not been defined"_s}));
	}
	return $of(checkCast(value, type));
}

void SynthParser::register$($String* key, Object$* value) {
	if (key != nullptr) {
		bool var$0 = $nc(this->_mapping)->get(key) != nullptr;
		if (var$0 || (this->_handler != nullptr && $nc(this->_handler)->hasVariable(key))) {
			$throwNew($SAXException, $$str({"ID "_s, key, " is already defined"_s}));
		}
		if (this->_handler != nullptr) {
			$nc(this->_handler)->setVariable(key, value);
		} else {
			$nc(this->_mapping)->put(key, value);
		}
	}
}

int32_t SynthParser::nextInt($StringTokenizer* tok, $String* errorMsg) {
	if (!$nc(tok)->hasMoreTokens()) {
		$throwNew($SAXException, errorMsg);
	}
	try {
		return $Integer::parseInt($($nc(tok)->nextToken()));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		$throwNew($SAXException, errorMsg);
	}
	$shouldNotReachHere();
}

$Insets* SynthParser::parseInsets($String* insets, $String* errorMsg) {
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, insets));
	int32_t var$0 = nextInt(tokenizer, errorMsg);
	int32_t var$1 = nextInt(tokenizer, errorMsg);
	int32_t var$2 = nextInt(tokenizer, errorMsg);
	return $new($Insets, var$0, var$1, var$2, nextInt(tokenizer, errorMsg));
}

void SynthParser::startStyle($Attributes* attributes) {
	$var($String, id, nullptr);
	$set(this, _style, nullptr);
	for (int32_t i = $nc(attributes)->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if ($nc(key)->equals(SynthParser::ATTRIBUTE_CLONE)) {
			$load($ParsedSynthStyle);
			$set(this, _style, $cast($ParsedSynthStyle, $nc(($cast($ParsedSynthStyle, $(lookup($(attributes->getValue(i)), $ParsedSynthStyle::class$)))))->clone()));
		} else if (key->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, attributes->getValue(i));
		}
	}
	if (this->_style == nullptr) {
		$set(this, _style, $new($ParsedSynthStyle));
	}
	register$(id, this->_style);
}

void SynthParser::endStyle() {
	int32_t size = $nc(this->_stylePainters)->size();
	if (size > 0) {
		$nc(this->_style)->setPainters($fcast($ParsedSynthStyle$PainterInfoArray, $($nc(this->_stylePainters)->toArray($$new($ParsedSynthStyle$PainterInfoArray, size)))));
		$nc(this->_stylePainters)->clear();
	}
	size = $nc(this->_stateInfos)->size();
	if (size > 0) {
		$nc(this->_style)->setStateInfo($fcast($DefaultSynthStyle$StateInfoArray, $($nc(this->_stateInfos)->toArray($$new($ParsedSynthStyle$StateInfoArray, size)))));
		$nc(this->_stateInfos)->clear();
	}
	$set(this, _style, nullptr);
}

void SynthParser::startState($Attributes* attributes) {
	$var($ParsedSynthStyle$StateInfo, stateInfo, nullptr);
	int32_t state = 0;
	$var($String, id, nullptr);
	$set(this, _stateInfo, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if ($nc(key)->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, attributes->getValue(i));
		} else if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
			$load($ParsedSynthStyle$StateInfo);
			$set(this, _stateInfo, $cast($ParsedSynthStyle$StateInfo, lookup($(attributes->getValue(i)), $ParsedSynthStyle$StateInfo::class$)));
		} else if (key->equals(SynthParser::ATTRIBUTE_CLONE)) {
			$load($ParsedSynthStyle$StateInfo);
			$set(this, _stateInfo, $cast($ParsedSynthStyle$StateInfo, $nc(($cast($ParsedSynthStyle$StateInfo, $(lookup($(attributes->getValue(i)), $ParsedSynthStyle$StateInfo::class$)))))->clone()));
		} else if (key->equals(SynthParser::ATTRIBUTE_VALUE)) {
			$var($StringTokenizer, tokenizer, $new($StringTokenizer, $(attributes->getValue(i))));
			while (tokenizer->hasMoreTokens()) {
				$var($String, stateString, $($nc($(tokenizer->nextToken()))->toUpperCase())->intern());
				if (stateString == "ENABLED"_s) {
					state |= $SynthConstants::ENABLED;
				} else if (stateString == "MOUSE_OVER"_s) {
					state |= $SynthConstants::MOUSE_OVER;
				} else if (stateString == "PRESSED"_s) {
					state |= $SynthConstants::PRESSED;
				} else if (stateString == "DISABLED"_s) {
					state |= $SynthConstants::DISABLED;
				} else if (stateString == "FOCUSED"_s) {
					state |= $SynthConstants::FOCUSED;
				} else if (stateString == "SELECTED"_s) {
					state |= $SynthConstants::SELECTED;
				} else if (stateString == "DEFAULT"_s) {
					state |= $SynthConstants::DEFAULT;
				} else if (stateString != "AND"_s) {
					$throwNew($SAXException, $$str({"Unknown state: "_s, $$str(state)}));
				}
			}
		}
	}
	if (this->_stateInfo == nullptr) {
		$set(this, _stateInfo, $new($ParsedSynthStyle$StateInfo));
	}
	$nc(this->_stateInfo)->setComponentState(state);
	register$(id, this->_stateInfo);
	$nc(this->_stateInfos)->add(this->_stateInfo);
}

void SynthParser::endState() {
	int32_t size = $nc(this->_statePainters)->size();
	if (size > 0) {
		$nc(this->_stateInfo)->setPainters($fcast($ParsedSynthStyle$PainterInfoArray, $($nc(this->_statePainters)->toArray($$new($ParsedSynthStyle$PainterInfoArray, size)))));
		$nc(this->_statePainters)->clear();
	}
	$set(this, _stateInfo, nullptr);
}

void SynthParser::startFont($Attributes* attributes) {
	$var($Font, font, nullptr);
	int32_t style = $Font::PLAIN;
	int32_t size = 0;
	$var($String, id, nullptr);
	$var($String, name, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if (key->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, attributes->getValue(i));
		} else if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
			$load($Font);
			$assign(font, $cast($Font, lookup($(attributes->getValue(i)), $Font::class$)));
		} else if (key->equals(SynthParser::ATTRIBUTE_NAME)) {
			$assign(name, attributes->getValue(i));
		} else if (key->equals(SynthParser::ATTRIBUTE_SIZE)) {
			try {
				size = $Integer::parseInt($(attributes->getValue(i)));
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, nfe, $catch());
				$throwNew($SAXException, $$str({"Invalid font size: "_s, $(attributes->getValue(i))}));
			}
		} else if (key->equals(SynthParser::ATTRIBUTE_STYLE)) {
			$var($StringTokenizer, tok, $new($StringTokenizer, $(attributes->getValue(i))));
			while (tok->hasMoreTokens()) {
				$var($String, token, $nc($(tok->nextToken()))->intern());
				if (token == "BOLD"_s) {
					style = ((style | $Font::PLAIN) ^ $Font::PLAIN) | $Font::BOLD;
				} else if (token == "ITALIC"_s) {
					style |= $Font::ITALIC;
				}
			}
		}
	}
	if (font == nullptr) {
		if (name == nullptr) {
			$throwNew($SAXException, "You must define a name for the font"_s);
		}
		if (size == 0) {
			$throwNew($SAXException, "You must define a size for the font"_s);
		}
		$assign(font, $new($FontUIResource, name, style, size));
	} else if (name != nullptr || size != 0 || style != $Font::PLAIN) {
		$throwNew($SAXException, "Name, size and style are not for use with idref"_s);
	}
	register$(id, font);
	if (this->_stateInfo != nullptr) {
		$nc(this->_stateInfo)->setFont(font);
	} else if (this->_style != nullptr) {
		$nc(this->_style)->setFont(font);
	}
}

void SynthParser::startColor($Attributes* attributes) {
	$beforeCallerSensitive();
	$var($Color, color, nullptr);
	$var($String, id, nullptr);
	$nc(this->_colorTypes)->clear();
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if (key->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, attributes->getValue(i));
		} else if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
			$load($Color);
			$assign(color, $cast($Color, lookup($(attributes->getValue(i)), $Color::class$)));
		} else if (key->equals(SynthParser::ATTRIBUTE_NAME)) {
		} else if (key->equals(SynthParser::ATTRIBUTE_VALUE)) {
			$var($String, value, attributes->getValue(i));
			if ($nc(value)->startsWith("#"_s)) {
				try {
					int32_t argb = 0;
					bool hasAlpha = false;
					int32_t length = value->length();
					if (length < 8) {
						argb = $nc($($Integer::decode(value)))->intValue();
						hasAlpha = false;
					} else if (length == 8) {
						argb = $nc($($Integer::decode(value)))->intValue();
						hasAlpha = true;
					} else if (length == 9) {
						int32_t rgb = $nc($($Integer::decode($$str({$$str(u'#'), $(value->substring(3, 9))}))))->intValue();
						int32_t a = $nc($($Integer::decode($(value->substring(0, 3)))))->intValue();
						argb = (a << 24) | rgb;
						hasAlpha = true;
					} else {
						$throwNew($SAXException, $$str({"Invalid Color value: "_s, value}));
					}
					$assign(color, $new($ColorUIResource, $$new($Color, argb, hasAlpha)));
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, nfe, $catch());
					$throwNew($SAXException, $$str({"Invalid Color value: "_s, value}));
				}
			} else {
				try {
					$load($Color);
					$assign(color, $new($ColorUIResource, $cast($Color, $($nc($($Color::class$->getField($(value->toUpperCase()))))->get($Color::class$)))));
				} catch ($NoSuchFieldException&) {
					$var($NoSuchFieldException, nsfe, $catch());
					$throwNew($SAXException, $$str({"Invalid color name: "_s, value}));
				} catch ($IllegalAccessException&) {
					$var($IllegalAccessException, iae, $catch());
					$throwNew($SAXException, $$str({"Invalid color name: "_s, value}));
				}
			}
		} else if (key->equals(SynthParser::ATTRIBUTE_TYPE)) {
			$var($StringTokenizer, tokenizer, $new($StringTokenizer, $(attributes->getValue(i))));
			while (tokenizer->hasMoreTokens()) {
				$var($String, typeName, tokenizer->nextToken());
				int32_t classIndex = $nc(typeName)->lastIndexOf((int32_t)u'.');
				$Class* typeClass = nullptr;
				if (classIndex == -1) {
					$load($ColorType);
					typeClass = $ColorType::class$;
					classIndex = 0;
				} else {
					try {
						typeClass = $ReflectUtil::forName($(typeName->substring(0, classIndex)));
					} catch ($ClassNotFoundException&) {
						$var($ClassNotFoundException, cnfe, $catch());
						$throwNew($SAXException, $$str({"Unknown class: "_s, $(typeName->substring(0, classIndex))}));
					}
					++classIndex;
				}
				try {
					$load($ColorType);
					$nc(this->_colorTypes)->add($cast($ColorType, $(checkCast($($nc($($nc(typeClass)->getField($(typeName->substring(classIndex)))))->get(typeClass)), $ColorType::class$))));
				} catch ($NoSuchFieldException&) {
					$var($NoSuchFieldException, nsfe, $catch());
					$throwNew($SAXException, $$str({"Unable to find color type: "_s, typeName}));
				} catch ($IllegalAccessException&) {
					$var($IllegalAccessException, iae, $catch());
					$throwNew($SAXException, $$str({"Unable to find color type: "_s, typeName}));
				}
			}
		}
	}
	if (color == nullptr) {
		$throwNew($SAXException, "color: you must specificy a value"_s);
	}
	register$(id, color);
	if (this->_stateInfo != nullptr && $nc(this->_colorTypes)->size() > 0) {
		$var($ColorArray, colors, $nc(this->_stateInfo)->getColors());
		int32_t max = 0;
		for (int32_t counter = $nc(this->_colorTypes)->size() - 1; counter >= 0; --counter) {
			max = $Math::max(max, $nc(($cast($ColorType, $($nc(this->_colorTypes)->get(counter)))))->getID());
		}
		if (colors == nullptr || $nc(colors)->length <= max) {
			$var($ColorArray, newColors, $new($ColorArray, max + 1));
			if (colors != nullptr) {
				$System::arraycopy(colors, 0, newColors, 0, colors->length);
			}
			$assign(colors, newColors);
		}
		for (int32_t counter = $nc(this->_colorTypes)->size() - 1; counter >= 0; --counter) {
			$nc(colors)->set($nc(($cast($ColorType, $($nc(this->_colorTypes)->get(counter)))))->getID(), color);
		}
		$nc(this->_stateInfo)->setColors(colors);
	}
}

void SynthParser::startProperty($Attributes* attributes, Object$* property) {
	$var($Object, value, nullptr);
	$var($String, key, nullptr);
	int32_t iType = 0;
	$var($String, aValue, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, aName, attributes->getQName(i));
		if ($nc(aName)->equals(SynthParser::ATTRIBUTE_TYPE)) {
			$var($String, type, $nc($(attributes->getValue(i)))->toUpperCase());
			if (type->equals("IDREF"_s)) {
				iType = 0;
			} else if (type->equals("BOOLEAN"_s)) {
				iType = 1;
			} else if (type->equals("DIMENSION"_s)) {
				iType = 2;
			} else if (type->equals("INSETS"_s)) {
				iType = 3;
			} else if (type->equals("INTEGER"_s)) {
				iType = 4;
			} else if (type->equals("STRING"_s)) {
				iType = 5;
			} else {
				$throwNew($SAXException, $$str({property, " unknown type, useidref, boolean, dimension, insets or integer"_s}));
			}
		} else if (aName->equals(SynthParser::ATTRIBUTE_VALUE)) {
			$assign(aValue, attributes->getValue(i));
		} else if (aName->equals(SynthParser::ATTRIBUTE_KEY)) {
			$assign(key, attributes->getValue(i));
		}
	}
	if (aValue != nullptr) {
		{
			$var($StringTokenizer, tok, nullptr)
			switch (iType) {
			case 0:
				{
					$load($Object);
					$assign(value, lookup(aValue, $Object::class$));
					break;
				}
			case 1:
				{
					$assign(value, $Boolean::valueOf($Boolean::parseBoolean(aValue)));
					break;
				}
			case 2:
				{
					$assign(tok, $new($StringTokenizer, aValue));
					int32_t var$0 = nextInt(tok, "Invalid dimension"_s);
					$assign(value, $new($DimensionUIResource, var$0, nextInt(tok, "Invalid dimension"_s)));
					break;
				}
			case 3:
				{
					$assign(value, parseInsets(aValue, $$str({property, " invalid insets"_s})));
					break;
				}
			case 4:
				{
					try {
						$assign(value, $Integer::valueOf(aValue));
					} catch ($NumberFormatException&) {
						$var($NumberFormatException, nfe, $catch());
						$throwNew($SAXException, $$str({property, " invalid value"_s}));
					}
					break;
				}
			case 5:
				{
					$assign(value, aValue);
					break;
				}
			}
		}
	}
	if (value == nullptr || key == nullptr) {
		$throwNew($SAXException, $$str({property, ": you must supply a key and value"_s}));
	}
	if ($equals(property, SynthParser::ELEMENT_DEFAULTS_PROPERTY)) {
		$nc(this->_defaultsMap)->put(key, value);
	} else if (this->_stateInfo != nullptr) {
		if ($nc(this->_stateInfo)->getData() == nullptr) {
			$nc(this->_stateInfo)->setData($$new($HashMap));
		}
		$nc($($nc(this->_stateInfo)->getData()))->put(key, value);
	} else if (this->_style != nullptr) {
		if ($nc(this->_style)->getData() == nullptr) {
			$nc(this->_style)->setData($$new($HashMap));
		}
		$nc($($nc(this->_style)->getData()))->put(key, value);
	}
}

void SynthParser::startGraphics($Attributes* attributes) {
	$var($SynthGraphicsUtils, graphics, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
			$load($SynthGraphicsUtils);
			$assign(graphics, $cast($SynthGraphicsUtils, lookup($(attributes->getValue(i)), $SynthGraphicsUtils::class$)));
		}
	}
	if (graphics == nullptr) {
		$throwNew($SAXException, "graphicsUtils: you must supply an idref"_s);
	}
	if (this->_style != nullptr) {
		$nc(this->_style)->setGraphicsUtils(graphics);
	}
}

void SynthParser::startInsets($Attributes* attributes) {
	int32_t top = 0;
	int32_t bottom = 0;
	int32_t left = 0;
	int32_t right = 0;
	$var($Insets, insets, nullptr);
	$var($String, id, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		try {
			if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
				$load($Insets);
				$assign(insets, $cast($Insets, lookup($(attributes->getValue(i)), $Insets::class$)));
			} else if (key->equals(SynthParser::ATTRIBUTE_ID)) {
				$assign(id, attributes->getValue(i));
			} else if (key->equals(SynthParser::ATTRIBUTE_TOP)) {
				top = $Integer::parseInt($(attributes->getValue(i)));
			} else if (key->equals(SynthParser::ATTRIBUTE_LEFT)) {
				left = $Integer::parseInt($(attributes->getValue(i)));
			} else if (key->equals(SynthParser::ATTRIBUTE_BOTTOM)) {
				bottom = $Integer::parseInt($(attributes->getValue(i)));
			} else if (key->equals(SynthParser::ATTRIBUTE_RIGHT)) {
				right = $Integer::parseInt($(attributes->getValue(i)));
			}
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			$throwNew($SAXException, $$str({"insets: bad integer value for "_s, $(attributes->getValue(i))}));
		}
	}
	if (insets == nullptr) {
		$assign(insets, $new($InsetsUIResource, top, left, bottom, right));
	}
	register$(id, insets);
	if (this->_style != nullptr) {
		$nc(this->_style)->setInsets(insets);
	}
}

void SynthParser::startBind($Attributes* attributes) {
	$var($ParsedSynthStyle, style, nullptr);
	$var($String, path, nullptr);
	int32_t type = -1;
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if (key->equals(SynthParser::ATTRIBUTE_STYLE)) {
			$load($ParsedSynthStyle);
			$assign(style, $cast($ParsedSynthStyle, lookup($(attributes->getValue(i)), $ParsedSynthStyle::class$)));
		} else if (key->equals(SynthParser::ATTRIBUTE_TYPE)) {
			$var($String, typeS, $nc($(attributes->getValue(i)))->toUpperCase());
			if (typeS->equals("NAME"_s)) {
				type = $DefaultSynthStyleFactory::NAME;
			} else if (typeS->equals("REGION"_s)) {
				type = $DefaultSynthStyleFactory::REGION;
			} else {
				$throwNew($SAXException, $$str({"bind: unknown type "_s, typeS}));
			}
		} else if (key->equals(SynthParser::ATTRIBUTE_KEY)) {
			$assign(path, attributes->getValue(i));
		}
	}
	if (style == nullptr || path == nullptr || type == -1) {
		$throwNew($SAXException, "bind: you must specify a style, type and key"_s);
	}
	try {
		$nc(this->_factory)->addStyle(style, path, type);
	} catch ($PatternSyntaxException&) {
		$var($PatternSyntaxException, pse, $catch());
		$throwNew($SAXException, $$str({"bind: "_s, path, " is not a valid regular expression"_s}));
	}
}

void SynthParser::startPainter($Attributes* attributes, $String* type) {
	$var($Insets, sourceInsets, nullptr);
	$var($Insets, destInsets, nullptr);
	$var($String, path, nullptr);
	bool paintCenter = true;
	bool stretch = true;
	$var($SynthPainter, painter, nullptr);
	$var($String, method, nullptr);
	$var($String, id, nullptr);
	int32_t direction = -1;
	bool center = false;
	bool stretchSpecified = false;
	bool paintCenterSpecified = false;
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		$var($String, value, attributes->getValue(i));
		if (key->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, value);
		} else if (key->equals(SynthParser::ATTRIBUTE_METHOD)) {
			$init($Locale);
			$assign(method, $nc(value)->toLowerCase($Locale::ENGLISH));
		} else if (key->equals(SynthParser::ATTRIBUTE_IDREF)) {
			$load($SynthPainter);
			$assign(painter, $cast($SynthPainter, lookup(value, $SynthPainter::class$)));
		} else if (key->equals(SynthParser::ATTRIBUTE_PATH)) {
			$assign(path, value);
		} else if (key->equals(SynthParser::ATTRIBUTE_SOURCE_INSETS)) {
			$assign(sourceInsets, parseInsets(value, $$str({type, ": sourceInsets must be top left bottom right"_s})));
		} else if (key->equals(SynthParser::ATTRIBUTE_DEST_INSETS)) {
			$assign(destInsets, parseInsets(value, $$str({type, ": destinationInsets must be top left bottom right"_s})));
		} else if (key->equals(SynthParser::ATTRIBUTE_PAINT_CENTER)) {
			paintCenter = $Boolean::parseBoolean(value);
			paintCenterSpecified = true;
		} else if (key->equals(SynthParser::ATTRIBUTE_STRETCH)) {
			stretch = $Boolean::parseBoolean(value);
			stretchSpecified = true;
		} else if (key->equals(SynthParser::ATTRIBUTE_DIRECTION)) {
			$assign(value, $($nc(value)->toUpperCase())->intern());
			if (value == "EAST"_s) {
				direction = $SwingConstants::EAST;
			} else if (value == "NORTH"_s) {
				direction = $SwingConstants::NORTH;
			} else if (value == "SOUTH"_s) {
				direction = $SwingConstants::SOUTH;
			} else if (value == "WEST"_s) {
				direction = $SwingConstants::WEST;
			} else if (value == "TOP"_s) {
				direction = $SwingConstants::TOP;
			} else if (value == "LEFT"_s) {
				direction = $SwingConstants::LEFT;
			} else if (value == "BOTTOM"_s) {
				direction = $SwingConstants::BOTTOM;
			} else if (value == "RIGHT"_s) {
				direction = $SwingConstants::RIGHT;
			} else if (value == "HORIZONTAL"_s) {
				direction = $SwingConstants::HORIZONTAL;
			} else if (value == "VERTICAL"_s) {
				direction = $SwingConstants::VERTICAL;
			} else if (value == "HORIZONTAL_SPLIT"_s) {
				direction = $JSplitPane::HORIZONTAL_SPLIT;
			} else if (value == "VERTICAL_SPLIT"_s) {
				direction = $JSplitPane::VERTICAL_SPLIT;
			} else {
				$throwNew($SAXException, $$str({type, ": unknown direction"_s}));
			}
		} else if (key->equals(SynthParser::ATTRIBUTE_CENTER)) {
			center = $Boolean::parseBoolean(value);
		}
	}
	if (painter == nullptr) {
		if (type == SynthParser::ELEMENT_PAINTER) {
			$throwNew($SAXException, $$str({type, ": you must specify an idref"_s}));
		}
		if (sourceInsets == nullptr && !center) {
			$throwNew($SAXException, "property: you must specify sourceInsets"_s);
		}
		if (path == nullptr) {
			$throwNew($SAXException, "property: you must specify a path"_s);
		}
		if (center && (sourceInsets != nullptr || destInsets != nullptr || paintCenterSpecified || stretchSpecified)) {
			$throwNew($SAXException, "The attributes: sourceInsets, destinationInsets, paintCenter and stretch  are not legal when center is true"_s);
		}
		$assign(painter, $new($ImagePainter, !stretch, paintCenter, sourceInsets, destInsets, $(getResource(path)), center));
	}
	register$(id, painter);
	if (this->_stateInfo != nullptr) {
		addPainterOrMerge(this->_statePainters, method, painter, direction);
	} else if (this->_style != nullptr) {
		addPainterOrMerge(this->_stylePainters, method, painter, direction);
	}
}

void SynthParser::addPainterOrMerge($List* painters, $String* method, $SynthPainter* painter, int32_t direction) {
	$var($ParsedSynthStyle$PainterInfo, painterInfo, nullptr);
	$assign(painterInfo, $new($ParsedSynthStyle$PainterInfo, method, painter, direction));
	{
		$var($Iterator, i$, $nc(painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, infoObject, i$->next());
			{
				$var($ParsedSynthStyle$PainterInfo, info, nullptr);
				$assign(info, $cast($ParsedSynthStyle$PainterInfo, infoObject));
				if (painterInfo->equalsPainter(info)) {
					$nc(info)->addPainter(painter);
					return;
				}
			}
		}
	}
	painters->add(painterInfo);
}

void SynthParser::startImageIcon($Attributes* attributes) {
	$var($String, path, nullptr);
	$var($String, id, nullptr);
	for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
		$var($String, key, attributes->getQName(i));
		if (key->equals(SynthParser::ATTRIBUTE_ID)) {
			$assign(id, attributes->getValue(i));
		} else if (key->equals(SynthParser::ATTRIBUTE_PATH)) {
			$assign(path, attributes->getValue(i));
		}
	}
	if (path == nullptr) {
		$throwNew($SAXException, "imageIcon: you must specify a path"_s);
	}
	register$(id, $$new($SynthParser$LazyImageIcon, $(getResource(path))));
}

void SynthParser::startOpaque($Attributes* attributes) {
	if (this->_style != nullptr) {
		$nc(this->_style)->setOpaque(true);
		for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
			$var($String, key, attributes->getQName(i));
			if (key->equals(SynthParser::ATTRIBUTE_VALUE)) {
				$nc(this->_style)->setOpaque("true"_s->equals($($nc($(attributes->getValue(i)))->toLowerCase())));
			}
		}
	}
}

void SynthParser::startInputMap($Attributes* attributes) {
	$nc(this->_inputMapBindings)->clear();
	$set(this, _inputMapID, nullptr);
	if (this->_style != nullptr) {
		for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
			$var($String, key, attributes->getQName(i));
			if (key->equals(SynthParser::ATTRIBUTE_ID)) {
				$set(this, _inputMapID, attributes->getValue(i));
			}
		}
	}
}

void SynthParser::endInputMap() {
	if (this->_inputMapID != nullptr) {
		register$(this->_inputMapID, $$new($UIDefaults$LazyInputMap, $($nc(this->_inputMapBindings)->toArray($$new($ObjectArray, $nc(this->_inputMapBindings)->size())))));
	}
	$nc(this->_inputMapBindings)->clear();
	$set(this, _inputMapID, nullptr);
}

void SynthParser::startBindKey($Attributes* attributes) {
	if (this->_inputMapID == nullptr) {
		return;
	}
	if (this->_style != nullptr) {
		$var($String, key, nullptr);
		$var($String, value, nullptr);
		for (int32_t i = attributes->getLength() - 1; i >= 0; --i) {
			$var($String, aKey, attributes->getQName(i));
			if ($nc(aKey)->equals(SynthParser::ATTRIBUTE_KEY)) {
				$assign(key, attributes->getValue(i));
			} else if (aKey->equals(SynthParser::ATTRIBUTE_ACTION)) {
				$assign(value, attributes->getValue(i));
			}
		}
		if (key == nullptr || value == nullptr) {
			$throwNew($SAXException, "bindKey: you must supply a key and action"_s);
		}
		$nc(this->_inputMapBindings)->add(key);
		$nc(this->_inputMapBindings)->add(value);
	}
}

$InputSource* SynthParser::resolveEntity($String* publicId, $String* systemId) {
	if (isForwarding()) {
		return $nc($(getHandler()))->resolveEntity(publicId, systemId);
	}
	return nullptr;
}

void SynthParser::notationDecl($String* name, $String* publicId, $String* systemId) {
	if (isForwarding()) {
		$nc($(getHandler()))->notationDecl(name, publicId, systemId);
	}
}

void SynthParser::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	if (isForwarding()) {
		$nc($(getHandler()))->unparsedEntityDecl(name, publicId, systemId, notationName);
	}
}

void SynthParser::setDocumentLocator($Locator* locator) {
	if (isForwarding()) {
		$nc($(getHandler()))->setDocumentLocator(locator);
	}
}

void SynthParser::startDocument() {
	if (isForwarding()) {
		$nc($(getHandler()))->startDocument();
	}
}

void SynthParser::endDocument() {
	if (isForwarding()) {
		$nc($(getHandler()))->endDocument();
	}
}

void SynthParser::startElement($String* uri, $String* local, $String* name$renamed, $Attributes* attributes) {
	$var($String, name, name$renamed);
	$assign(name, $nc(name)->intern());
	if (name == SynthParser::ELEMENT_STYLE) {
		startStyle(attributes);
	} else if (name == SynthParser::ELEMENT_STATE) {
		startState(attributes);
	} else if (name == SynthParser::ELEMENT_FONT) {
		startFont(attributes);
	} else if (name == SynthParser::ELEMENT_COLOR) {
		startColor(attributes);
	} else if (name == SynthParser::ELEMENT_PAINTER) {
		startPainter(attributes, name);
	} else if (name == SynthParser::ELEMENT_IMAGE_PAINTER) {
		startPainter(attributes, name);
	} else if (name == SynthParser::ELEMENT_PROPERTY) {
		startProperty(attributes, SynthParser::ELEMENT_PROPERTY);
	} else if (name == SynthParser::ELEMENT_DEFAULTS_PROPERTY) {
		startProperty(attributes, SynthParser::ELEMENT_DEFAULTS_PROPERTY);
	} else if (name == SynthParser::ELEMENT_SYNTH_GRAPHICS) {
		startGraphics(attributes);
	} else if (name == SynthParser::ELEMENT_INSETS) {
		startInsets(attributes);
	} else if (name == SynthParser::ELEMENT_BIND) {
		startBind(attributes);
	} else if (name == SynthParser::ELEMENT_BIND_KEY) {
		startBindKey(attributes);
	} else if (name == SynthParser::ELEMENT_IMAGE_ICON) {
		startImageIcon(attributes);
	} else if (name == SynthParser::ELEMENT_OPAQUE) {
		startOpaque(attributes);
	} else if (name == SynthParser::ELEMENT_INPUT_MAP) {
		startInputMap(attributes);
	} else if (name != SynthParser::ELEMENT_SYNTH) {
		if (this->_depth++ == 0) {
			$nc($(getHandler()))->startDocument();
		}
		$nc($(getHandler()))->startElement(uri, local, name, attributes);
	}
}

void SynthParser::endElement($String* uri, $String* local, $String* name$renamed) {
	$var($String, name, name$renamed);
	if (isForwarding()) {
		$nc($(getHandler()))->endElement(uri, local, name);
		--this->_depth;
		if (!isForwarding()) {
			$nc($(getHandler()))->startDocument();
		}
	} else {
		$assign(name, $nc(name)->intern());
		if (name == SynthParser::ELEMENT_STYLE) {
			endStyle();
		} else if (name == SynthParser::ELEMENT_STATE) {
			endState();
		} else if (name == SynthParser::ELEMENT_INPUT_MAP) {
			endInputMap();
		}
	}
}

void SynthParser::characters($chars* ch, int32_t start, int32_t length) {
	if (isForwarding()) {
		$nc($(getHandler()))->characters(ch, start, length);
	}
}

void SynthParser::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (isForwarding()) {
		$nc($(getHandler()))->ignorableWhitespace(ch, start, length);
	}
}

void SynthParser::processingInstruction($String* target, $String* data) {
	if (isForwarding()) {
		$nc($(getHandler()))->processingInstruction(target, data);
	}
}

void SynthParser::warning($SAXParseException* e) {
	if (isForwarding()) {
		$nc($(getHandler()))->warning(e);
	}
}

void SynthParser::error($SAXParseException* e) {
	if (isForwarding()) {
		$nc($(getHandler()))->error(e);
	}
}

void SynthParser::fatalError($SAXParseException* e) {
	if (isForwarding()) {
		$nc($(getHandler()))->fatalError(e);
	}
	$throw(e);
}

void clinit$SynthParser($Class* class$) {
	$assignStatic(SynthParser::ELEMENT_SYNTH, "synth"_s);
	$assignStatic(SynthParser::ELEMENT_STYLE, "style"_s);
	$assignStatic(SynthParser::ELEMENT_STATE, "state"_s);
	$assignStatic(SynthParser::ELEMENT_FONT, "font"_s);
	$assignStatic(SynthParser::ELEMENT_COLOR, "color"_s);
	$assignStatic(SynthParser::ELEMENT_IMAGE_PAINTER, "imagePainter"_s);
	$assignStatic(SynthParser::ELEMENT_PAINTER, "painter"_s);
	$assignStatic(SynthParser::ELEMENT_PROPERTY, "property"_s);
	$assignStatic(SynthParser::ELEMENT_SYNTH_GRAPHICS, "graphicsUtils"_s);
	$assignStatic(SynthParser::ELEMENT_IMAGE_ICON, "imageIcon"_s);
	$assignStatic(SynthParser::ELEMENT_BIND, "bind"_s);
	$assignStatic(SynthParser::ELEMENT_BIND_KEY, "bindKey"_s);
	$assignStatic(SynthParser::ELEMENT_INSETS, "insets"_s);
	$assignStatic(SynthParser::ELEMENT_OPAQUE, "opaque"_s);
	$assignStatic(SynthParser::ELEMENT_DEFAULTS_PROPERTY, "defaultsProperty"_s);
	$assignStatic(SynthParser::ELEMENT_INPUT_MAP, "inputMap"_s);
	$assignStatic(SynthParser::ATTRIBUTE_ACTION, "action"_s);
	$assignStatic(SynthParser::ATTRIBUTE_ID, "id"_s);
	$assignStatic(SynthParser::ATTRIBUTE_IDREF, "idref"_s);
	$assignStatic(SynthParser::ATTRIBUTE_CLONE, "clone"_s);
	$assignStatic(SynthParser::ATTRIBUTE_VALUE, "value"_s);
	$assignStatic(SynthParser::ATTRIBUTE_NAME, "name"_s);
	$assignStatic(SynthParser::ATTRIBUTE_STYLE, "style"_s);
	$assignStatic(SynthParser::ATTRIBUTE_SIZE, "size"_s);
	$assignStatic(SynthParser::ATTRIBUTE_TYPE, "type"_s);
	$assignStatic(SynthParser::ATTRIBUTE_TOP, "top"_s);
	$assignStatic(SynthParser::ATTRIBUTE_LEFT, "left"_s);
	$assignStatic(SynthParser::ATTRIBUTE_BOTTOM, "bottom"_s);
	$assignStatic(SynthParser::ATTRIBUTE_RIGHT, "right"_s);
	$assignStatic(SynthParser::ATTRIBUTE_KEY, "key"_s);
	$assignStatic(SynthParser::ATTRIBUTE_SOURCE_INSETS, "sourceInsets"_s);
	$assignStatic(SynthParser::ATTRIBUTE_DEST_INSETS, "destinationInsets"_s);
	$assignStatic(SynthParser::ATTRIBUTE_PATH, "path"_s);
	$assignStatic(SynthParser::ATTRIBUTE_STRETCH, "stretch"_s);
	$assignStatic(SynthParser::ATTRIBUTE_PAINT_CENTER, "paintCenter"_s);
	$assignStatic(SynthParser::ATTRIBUTE_METHOD, "method"_s);
	$assignStatic(SynthParser::ATTRIBUTE_DIRECTION, "direction"_s);
	$assignStatic(SynthParser::ATTRIBUTE_CENTER, "center"_s);
	SynthParser::$assertionsDisabled = !SynthParser::class$->desiredAssertionStatus();
}

SynthParser::SynthParser() {
}

$Class* SynthParser::load$($String* name, bool initialize) {
	$loadClass(SynthParser, name, initialize, &_SynthParser_ClassInfo_, clinit$SynthParser, allocate$SynthParser);
	return class$;
}

$Class* SynthParser::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax