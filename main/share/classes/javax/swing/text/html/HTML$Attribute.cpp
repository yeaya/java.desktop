#include <javax/swing/text/html/HTML$Attribute.h>

#include <javax/swing/text/html/HTML.h>
#include <jcpp.h>

#undef ACTION
#undef ALIGN
#undef ALINK
#undef ALT
#undef ARCHIVE
#undef BACKGROUND
#undef BGCOLOR
#undef BORDER
#undef CELLPADDING
#undef CELLSPACING
#undef CHECKED
#undef CLASS
#undef CLASSID
#undef CLEAR
#undef CODE
#undef CODEBASE
#undef CODETYPE
#undef COLOR
#undef COLS
#undef COLSPAN
#undef COMMENT
#undef COMPACT
#undef CONTENT
#undef COORDS
#undef DATA
#undef DECLARE
#undef DIR
#undef DUMMY
#undef ENCTYPE
#undef ENDTAG
#undef FACE
#undef FRAMEBORDER
#undef HALIGN
#undef HEIGHT
#undef HREF
#undef HSPACE
#undef HTTPEQUIV
#undef ID
#undef ISMAP
#undef LANG
#undef LANGUAGE
#undef LINK
#undef LOWSRC
#undef MARGINHEIGHT
#undef MARGINWIDTH
#undef MAXLENGTH
#undef MEDIA
#undef METHOD
#undef MULTIPLE
#undef N
#undef NAME
#undef NOHREF
#undef NORESIZE
#undef NOSHADE
#undef NOWRAP
#undef PROMPT
#undef REL
#undef REV
#undef ROWS
#undef ROWSPAN
#undef SCROLLING
#undef SELECTED
#undef SHAPE
#undef SHAPES
#undef SIZE
#undef SRC
#undef STANDBY
#undef START
#undef STYLE
#undef TARGET
#undef TEXT
#undef TITLE
#undef TYPE
#undef USEMAP
#undef VALIGN
#undef VALUE
#undef VALUETYPE
#undef VERSION
#undef VLINK
#undef VSPACE
#undef WIDTH

using $HTML$AttributeArray = $Array<::javax::swing::text::html::HTML$Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTML = ::javax::swing::text::html::HTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTML$Attribute_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTML$Attribute, name)},
	{"SIZE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SIZE)},
	{"COLOR", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COLOR)},
	{"CLEAR", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CLEAR)},
	{"BACKGROUND", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, BACKGROUND)},
	{"BGCOLOR", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, BGCOLOR)},
	{"TEXT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, TEXT)},
	{"LINK", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, LINK)},
	{"VLINK", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VLINK)},
	{"ALINK", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ALINK)},
	{"WIDTH", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, WIDTH)},
	{"HEIGHT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, HEIGHT)},
	{"ALIGN", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ALIGN)},
	{"NAME", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, NAME)},
	{"HREF", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, HREF)},
	{"REL", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, REL)},
	{"REV", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, REV)},
	{"TITLE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, TITLE)},
	{"TARGET", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, TARGET)},
	{"SHAPE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SHAPE)},
	{"COORDS", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COORDS)},
	{"ISMAP", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ISMAP)},
	{"NOHREF", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, NOHREF)},
	{"ALT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ALT)},
	{"ID", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ID)},
	{"SRC", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SRC)},
	{"HSPACE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, HSPACE)},
	{"VSPACE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VSPACE)},
	{"USEMAP", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, USEMAP)},
	{"LOWSRC", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, LOWSRC)},
	{"CODEBASE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CODEBASE)},
	{"CODE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CODE)},
	{"ARCHIVE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ARCHIVE)},
	{"VALUE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VALUE)},
	{"VALUETYPE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VALUETYPE)},
	{"TYPE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, TYPE)},
	{"CLASS", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CLASS)},
	{"STYLE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, STYLE)},
	{"LANG", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, LANG)},
	{"FACE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, FACE)},
	{"DIR", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, DIR)},
	{"DECLARE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, DECLARE)},
	{"CLASSID", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CLASSID)},
	{"DATA", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, DATA)},
	{"CODETYPE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CODETYPE)},
	{"STANDBY", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, STANDBY)},
	{"BORDER", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, BORDER)},
	{"SHAPES", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SHAPES)},
	{"NOSHADE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, NOSHADE)},
	{"COMPACT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COMPACT)},
	{"START", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, START)},
	{"ACTION", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ACTION)},
	{"METHOD", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, METHOD)},
	{"ENCTYPE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ENCTYPE)},
	{"CHECKED", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CHECKED)},
	{"MAXLENGTH", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, MAXLENGTH)},
	{"MULTIPLE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, MULTIPLE)},
	{"SELECTED", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SELECTED)},
	{"ROWS", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ROWS)},
	{"COLS", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COLS)},
	{"DUMMY", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, DUMMY)},
	{"CELLSPACING", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CELLSPACING)},
	{"CELLPADDING", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CELLPADDING)},
	{"VALIGN", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VALIGN)},
	{"HALIGN", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, HALIGN)},
	{"NOWRAP", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, NOWRAP)},
	{"ROWSPAN", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ROWSPAN)},
	{"COLSPAN", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COLSPAN)},
	{"PROMPT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, PROMPT)},
	{"HTTPEQUIV", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, HTTPEQUIV)},
	{"CONTENT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, CONTENT)},
	{"LANGUAGE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, LANGUAGE)},
	{"VERSION", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, VERSION)},
	{"N", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, N)},
	{"FRAMEBORDER", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, FRAMEBORDER)},
	{"MARGINWIDTH", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, MARGINWIDTH)},
	{"MARGINHEIGHT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, MARGINHEIGHT)},
	{"SCROLLING", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, SCROLLING)},
	{"NORESIZE", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, NORESIZE)},
	{"ENDTAG", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, ENDTAG)},
	{"COMMENT", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Attribute, COMMENT)},
	{"MEDIA", "Ljavax/swing/text/html/HTML$Attribute;", nullptr, $STATIC | $FINAL, $staticField(HTML$Attribute, MEDIA)},
	{"allAttributes", "[Ljavax/swing/text/html/HTML$Attribute;", nullptr, $STATIC | $FINAL, $staticField(HTML$Attribute, allAttributes)},
	{}
};

$MethodInfo _HTML$Attribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(HTML$Attribute::*)($String*)>(&HTML$Attribute::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTML$Attribute_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTML$Attribute", "javax.swing.text.html.HTML", "Attribute", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HTML$Attribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.HTML$Attribute",
	"java.lang.Object",
	nullptr,
	_HTML$Attribute_FieldInfo_,
	_HTML$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_HTML$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTML"
};

$Object* allocate$HTML$Attribute($Class* clazz) {
	return $of($alloc(HTML$Attribute));
}

HTML$Attribute* HTML$Attribute::SIZE = nullptr;
HTML$Attribute* HTML$Attribute::COLOR = nullptr;
HTML$Attribute* HTML$Attribute::CLEAR = nullptr;
HTML$Attribute* HTML$Attribute::BACKGROUND = nullptr;
HTML$Attribute* HTML$Attribute::BGCOLOR = nullptr;
HTML$Attribute* HTML$Attribute::TEXT = nullptr;
HTML$Attribute* HTML$Attribute::LINK = nullptr;
HTML$Attribute* HTML$Attribute::VLINK = nullptr;
HTML$Attribute* HTML$Attribute::ALINK = nullptr;
HTML$Attribute* HTML$Attribute::WIDTH = nullptr;
HTML$Attribute* HTML$Attribute::HEIGHT = nullptr;
HTML$Attribute* HTML$Attribute::ALIGN = nullptr;
HTML$Attribute* HTML$Attribute::NAME = nullptr;
HTML$Attribute* HTML$Attribute::HREF = nullptr;
HTML$Attribute* HTML$Attribute::REL = nullptr;
HTML$Attribute* HTML$Attribute::REV = nullptr;
HTML$Attribute* HTML$Attribute::TITLE = nullptr;
HTML$Attribute* HTML$Attribute::TARGET = nullptr;
HTML$Attribute* HTML$Attribute::SHAPE = nullptr;
HTML$Attribute* HTML$Attribute::COORDS = nullptr;
HTML$Attribute* HTML$Attribute::ISMAP = nullptr;
HTML$Attribute* HTML$Attribute::NOHREF = nullptr;
HTML$Attribute* HTML$Attribute::ALT = nullptr;
HTML$Attribute* HTML$Attribute::ID = nullptr;
HTML$Attribute* HTML$Attribute::SRC = nullptr;
HTML$Attribute* HTML$Attribute::HSPACE = nullptr;
HTML$Attribute* HTML$Attribute::VSPACE = nullptr;
HTML$Attribute* HTML$Attribute::USEMAP = nullptr;
HTML$Attribute* HTML$Attribute::LOWSRC = nullptr;
HTML$Attribute* HTML$Attribute::CODEBASE = nullptr;
HTML$Attribute* HTML$Attribute::CODE = nullptr;
HTML$Attribute* HTML$Attribute::ARCHIVE = nullptr;
HTML$Attribute* HTML$Attribute::VALUE = nullptr;
HTML$Attribute* HTML$Attribute::VALUETYPE = nullptr;
HTML$Attribute* HTML$Attribute::TYPE = nullptr;
HTML$Attribute* HTML$Attribute::CLASS = nullptr;
HTML$Attribute* HTML$Attribute::STYLE = nullptr;
HTML$Attribute* HTML$Attribute::LANG = nullptr;
HTML$Attribute* HTML$Attribute::FACE = nullptr;
HTML$Attribute* HTML$Attribute::DIR = nullptr;
HTML$Attribute* HTML$Attribute::DECLARE = nullptr;
HTML$Attribute* HTML$Attribute::CLASSID = nullptr;
HTML$Attribute* HTML$Attribute::DATA = nullptr;
HTML$Attribute* HTML$Attribute::CODETYPE = nullptr;
HTML$Attribute* HTML$Attribute::STANDBY = nullptr;
HTML$Attribute* HTML$Attribute::BORDER = nullptr;
HTML$Attribute* HTML$Attribute::SHAPES = nullptr;
HTML$Attribute* HTML$Attribute::NOSHADE = nullptr;
HTML$Attribute* HTML$Attribute::COMPACT = nullptr;
HTML$Attribute* HTML$Attribute::START = nullptr;
HTML$Attribute* HTML$Attribute::ACTION = nullptr;
HTML$Attribute* HTML$Attribute::METHOD = nullptr;
HTML$Attribute* HTML$Attribute::ENCTYPE = nullptr;
HTML$Attribute* HTML$Attribute::CHECKED = nullptr;
HTML$Attribute* HTML$Attribute::MAXLENGTH = nullptr;
HTML$Attribute* HTML$Attribute::MULTIPLE = nullptr;
HTML$Attribute* HTML$Attribute::SELECTED = nullptr;
HTML$Attribute* HTML$Attribute::ROWS = nullptr;
HTML$Attribute* HTML$Attribute::COLS = nullptr;
HTML$Attribute* HTML$Attribute::DUMMY = nullptr;
HTML$Attribute* HTML$Attribute::CELLSPACING = nullptr;
HTML$Attribute* HTML$Attribute::CELLPADDING = nullptr;
HTML$Attribute* HTML$Attribute::VALIGN = nullptr;
HTML$Attribute* HTML$Attribute::HALIGN = nullptr;
HTML$Attribute* HTML$Attribute::NOWRAP = nullptr;
HTML$Attribute* HTML$Attribute::ROWSPAN = nullptr;
HTML$Attribute* HTML$Attribute::COLSPAN = nullptr;
HTML$Attribute* HTML$Attribute::PROMPT = nullptr;
HTML$Attribute* HTML$Attribute::HTTPEQUIV = nullptr;
HTML$Attribute* HTML$Attribute::CONTENT = nullptr;
HTML$Attribute* HTML$Attribute::LANGUAGE = nullptr;
HTML$Attribute* HTML$Attribute::VERSION = nullptr;
HTML$Attribute* HTML$Attribute::N = nullptr;
HTML$Attribute* HTML$Attribute::FRAMEBORDER = nullptr;
HTML$Attribute* HTML$Attribute::MARGINWIDTH = nullptr;
HTML$Attribute* HTML$Attribute::MARGINHEIGHT = nullptr;
HTML$Attribute* HTML$Attribute::SCROLLING = nullptr;
HTML$Attribute* HTML$Attribute::NORESIZE = nullptr;
HTML$Attribute* HTML$Attribute::ENDTAG = nullptr;
HTML$Attribute* HTML$Attribute::COMMENT = nullptr;
HTML$Attribute* HTML$Attribute::MEDIA = nullptr;
$HTML$AttributeArray* HTML$Attribute::allAttributes = nullptr;

void HTML$Attribute::init$($String* id) {
	$set(this, name, id);
}

$String* HTML$Attribute::toString() {
	return this->name;
}

void clinit$HTML$Attribute($Class* class$) {
	$assignStatic(HTML$Attribute::SIZE, $new(HTML$Attribute, "size"_s));
	$assignStatic(HTML$Attribute::COLOR, $new(HTML$Attribute, "color"_s));
	$assignStatic(HTML$Attribute::CLEAR, $new(HTML$Attribute, "clear"_s));
	$assignStatic(HTML$Attribute::BACKGROUND, $new(HTML$Attribute, "background"_s));
	$assignStatic(HTML$Attribute::BGCOLOR, $new(HTML$Attribute, "bgcolor"_s));
	$assignStatic(HTML$Attribute::TEXT, $new(HTML$Attribute, "text"_s));
	$assignStatic(HTML$Attribute::LINK, $new(HTML$Attribute, "link"_s));
	$assignStatic(HTML$Attribute::VLINK, $new(HTML$Attribute, "vlink"_s));
	$assignStatic(HTML$Attribute::ALINK, $new(HTML$Attribute, "alink"_s));
	$assignStatic(HTML$Attribute::WIDTH, $new(HTML$Attribute, "width"_s));
	$assignStatic(HTML$Attribute::HEIGHT, $new(HTML$Attribute, "height"_s));
	$assignStatic(HTML$Attribute::ALIGN, $new(HTML$Attribute, "align"_s));
	$assignStatic(HTML$Attribute::NAME, $new(HTML$Attribute, "name"_s));
	$assignStatic(HTML$Attribute::HREF, $new(HTML$Attribute, "href"_s));
	$assignStatic(HTML$Attribute::REL, $new(HTML$Attribute, "rel"_s));
	$assignStatic(HTML$Attribute::REV, $new(HTML$Attribute, "rev"_s));
	$assignStatic(HTML$Attribute::TITLE, $new(HTML$Attribute, "title"_s));
	$assignStatic(HTML$Attribute::TARGET, $new(HTML$Attribute, "target"_s));
	$assignStatic(HTML$Attribute::SHAPE, $new(HTML$Attribute, "shape"_s));
	$assignStatic(HTML$Attribute::COORDS, $new(HTML$Attribute, "coords"_s));
	$assignStatic(HTML$Attribute::ISMAP, $new(HTML$Attribute, "ismap"_s));
	$assignStatic(HTML$Attribute::NOHREF, $new(HTML$Attribute, "nohref"_s));
	$assignStatic(HTML$Attribute::ALT, $new(HTML$Attribute, "alt"_s));
	$assignStatic(HTML$Attribute::ID, $new(HTML$Attribute, "id"_s));
	$assignStatic(HTML$Attribute::SRC, $new(HTML$Attribute, "src"_s));
	$assignStatic(HTML$Attribute::HSPACE, $new(HTML$Attribute, "hspace"_s));
	$assignStatic(HTML$Attribute::VSPACE, $new(HTML$Attribute, "vspace"_s));
	$assignStatic(HTML$Attribute::USEMAP, $new(HTML$Attribute, "usemap"_s));
	$assignStatic(HTML$Attribute::LOWSRC, $new(HTML$Attribute, "lowsrc"_s));
	$assignStatic(HTML$Attribute::CODEBASE, $new(HTML$Attribute, "codebase"_s));
	$assignStatic(HTML$Attribute::CODE, $new(HTML$Attribute, "code"_s));
	$assignStatic(HTML$Attribute::ARCHIVE, $new(HTML$Attribute, "archive"_s));
	$assignStatic(HTML$Attribute::VALUE, $new(HTML$Attribute, "value"_s));
	$assignStatic(HTML$Attribute::VALUETYPE, $new(HTML$Attribute, "valuetype"_s));
	$assignStatic(HTML$Attribute::TYPE, $new(HTML$Attribute, "type"_s));
	$assignStatic(HTML$Attribute::CLASS, $new(HTML$Attribute, "class"_s));
	$assignStatic(HTML$Attribute::STYLE, $new(HTML$Attribute, "style"_s));
	$assignStatic(HTML$Attribute::LANG, $new(HTML$Attribute, "lang"_s));
	$assignStatic(HTML$Attribute::FACE, $new(HTML$Attribute, "face"_s));
	$assignStatic(HTML$Attribute::DIR, $new(HTML$Attribute, "dir"_s));
	$assignStatic(HTML$Attribute::DECLARE, $new(HTML$Attribute, "declare"_s));
	$assignStatic(HTML$Attribute::CLASSID, $new(HTML$Attribute, "classid"_s));
	$assignStatic(HTML$Attribute::DATA, $new(HTML$Attribute, "data"_s));
	$assignStatic(HTML$Attribute::CODETYPE, $new(HTML$Attribute, "codetype"_s));
	$assignStatic(HTML$Attribute::STANDBY, $new(HTML$Attribute, "standby"_s));
	$assignStatic(HTML$Attribute::BORDER, $new(HTML$Attribute, "border"_s));
	$assignStatic(HTML$Attribute::SHAPES, $new(HTML$Attribute, "shapes"_s));
	$assignStatic(HTML$Attribute::NOSHADE, $new(HTML$Attribute, "noshade"_s));
	$assignStatic(HTML$Attribute::COMPACT, $new(HTML$Attribute, "compact"_s));
	$assignStatic(HTML$Attribute::START, $new(HTML$Attribute, "start"_s));
	$assignStatic(HTML$Attribute::ACTION, $new(HTML$Attribute, "action"_s));
	$assignStatic(HTML$Attribute::METHOD, $new(HTML$Attribute, "method"_s));
	$assignStatic(HTML$Attribute::ENCTYPE, $new(HTML$Attribute, "enctype"_s));
	$assignStatic(HTML$Attribute::CHECKED, $new(HTML$Attribute, "checked"_s));
	$assignStatic(HTML$Attribute::MAXLENGTH, $new(HTML$Attribute, "maxlength"_s));
	$assignStatic(HTML$Attribute::MULTIPLE, $new(HTML$Attribute, "multiple"_s));
	$assignStatic(HTML$Attribute::SELECTED, $new(HTML$Attribute, "selected"_s));
	$assignStatic(HTML$Attribute::ROWS, $new(HTML$Attribute, "rows"_s));
	$assignStatic(HTML$Attribute::COLS, $new(HTML$Attribute, "cols"_s));
	$assignStatic(HTML$Attribute::DUMMY, $new(HTML$Attribute, "dummy"_s));
	$assignStatic(HTML$Attribute::CELLSPACING, $new(HTML$Attribute, "cellspacing"_s));
	$assignStatic(HTML$Attribute::CELLPADDING, $new(HTML$Attribute, "cellpadding"_s));
	$assignStatic(HTML$Attribute::VALIGN, $new(HTML$Attribute, "valign"_s));
	$assignStatic(HTML$Attribute::HALIGN, $new(HTML$Attribute, "halign"_s));
	$assignStatic(HTML$Attribute::NOWRAP, $new(HTML$Attribute, "nowrap"_s));
	$assignStatic(HTML$Attribute::ROWSPAN, $new(HTML$Attribute, "rowspan"_s));
	$assignStatic(HTML$Attribute::COLSPAN, $new(HTML$Attribute, "colspan"_s));
	$assignStatic(HTML$Attribute::PROMPT, $new(HTML$Attribute, "prompt"_s));
	$assignStatic(HTML$Attribute::HTTPEQUIV, $new(HTML$Attribute, "http-equiv"_s));
	$assignStatic(HTML$Attribute::CONTENT, $new(HTML$Attribute, "content"_s));
	$assignStatic(HTML$Attribute::LANGUAGE, $new(HTML$Attribute, "language"_s));
	$assignStatic(HTML$Attribute::VERSION, $new(HTML$Attribute, "version"_s));
	$assignStatic(HTML$Attribute::N, $new(HTML$Attribute, "n"_s));
	$assignStatic(HTML$Attribute::FRAMEBORDER, $new(HTML$Attribute, "frameborder"_s));
	$assignStatic(HTML$Attribute::MARGINWIDTH, $new(HTML$Attribute, "marginwidth"_s));
	$assignStatic(HTML$Attribute::MARGINHEIGHT, $new(HTML$Attribute, "marginheight"_s));
	$assignStatic(HTML$Attribute::SCROLLING, $new(HTML$Attribute, "scrolling"_s));
	$assignStatic(HTML$Attribute::NORESIZE, $new(HTML$Attribute, "noresize"_s));
	$assignStatic(HTML$Attribute::ENDTAG, $new(HTML$Attribute, "endtag"_s));
	$assignStatic(HTML$Attribute::COMMENT, $new(HTML$Attribute, "comment"_s));
	$assignStatic(HTML$Attribute::MEDIA, $new(HTML$Attribute, "media"_s));
	$assignStatic(HTML$Attribute::allAttributes, $new($HTML$AttributeArray, {
		HTML$Attribute::FACE,
		HTML$Attribute::COMMENT,
		HTML$Attribute::SIZE,
		HTML$Attribute::COLOR,
		HTML$Attribute::CLEAR,
		HTML$Attribute::BACKGROUND,
		HTML$Attribute::BGCOLOR,
		HTML$Attribute::TEXT,
		HTML$Attribute::LINK,
		HTML$Attribute::VLINK,
		HTML$Attribute::ALINK,
		HTML$Attribute::WIDTH,
		HTML$Attribute::HEIGHT,
		HTML$Attribute::ALIGN,
		HTML$Attribute::NAME,
		HTML$Attribute::HREF,
		HTML$Attribute::REL,
		HTML$Attribute::REV,
		HTML$Attribute::TITLE,
		HTML$Attribute::TARGET,
		HTML$Attribute::SHAPE,
		HTML$Attribute::COORDS,
		HTML$Attribute::ISMAP,
		HTML$Attribute::NOHREF,
		HTML$Attribute::ALT,
		HTML$Attribute::ID,
		HTML$Attribute::SRC,
		HTML$Attribute::HSPACE,
		HTML$Attribute::VSPACE,
		HTML$Attribute::USEMAP,
		HTML$Attribute::LOWSRC,
		HTML$Attribute::CODEBASE,
		HTML$Attribute::CODE,
		HTML$Attribute::ARCHIVE,
		HTML$Attribute::VALUE,
		HTML$Attribute::VALUETYPE,
		HTML$Attribute::TYPE,
		HTML$Attribute::CLASS,
		HTML$Attribute::STYLE,
		HTML$Attribute::LANG,
		HTML$Attribute::DIR,
		HTML$Attribute::DECLARE,
		HTML$Attribute::CLASSID,
		HTML$Attribute::DATA,
		HTML$Attribute::CODETYPE,
		HTML$Attribute::STANDBY,
		HTML$Attribute::BORDER,
		HTML$Attribute::SHAPES,
		HTML$Attribute::NOSHADE,
		HTML$Attribute::COMPACT,
		HTML$Attribute::START,
		HTML$Attribute::ACTION,
		HTML$Attribute::METHOD,
		HTML$Attribute::ENCTYPE,
		HTML$Attribute::CHECKED,
		HTML$Attribute::MAXLENGTH,
		HTML$Attribute::MULTIPLE,
		HTML$Attribute::SELECTED,
		HTML$Attribute::ROWS,
		HTML$Attribute::COLS,
		HTML$Attribute::DUMMY,
		HTML$Attribute::CELLSPACING,
		HTML$Attribute::CELLPADDING,
		HTML$Attribute::VALIGN,
		HTML$Attribute::HALIGN,
		HTML$Attribute::NOWRAP,
		HTML$Attribute::ROWSPAN,
		HTML$Attribute::COLSPAN,
		HTML$Attribute::PROMPT,
		HTML$Attribute::HTTPEQUIV,
		HTML$Attribute::CONTENT,
		HTML$Attribute::LANGUAGE,
		HTML$Attribute::VERSION,
		HTML$Attribute::N,
		HTML$Attribute::FRAMEBORDER,
		HTML$Attribute::MARGINWIDTH,
		HTML$Attribute::MARGINHEIGHT,
		HTML$Attribute::SCROLLING,
		HTML$Attribute::NORESIZE,
		HTML$Attribute::MEDIA,
		HTML$Attribute::ENDTAG
	}));
}

HTML$Attribute::HTML$Attribute() {
}

$Class* HTML$Attribute::load$($String* name, bool initialize) {
	$loadClass(HTML$Attribute, name, initialize, &_HTML$Attribute_ClassInfo_, clinit$HTML$Attribute, allocate$HTML$Attribute);
	return class$;
}

$Class* HTML$Attribute::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax