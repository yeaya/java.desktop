#include <javax/swing/text/html/HTML$Tag.h>

#include <javax/swing/text/html/HTML.h>
#include <jcpp.h>

#undef A
#undef ADDRESS
#undef APPLET
#undef AREA
#undef B
#undef BASE
#undef BASEFONT
#undef BIG
#undef BLOCKQUOTE
#undef BODY
#undef BR
#undef CAPTION
#undef CENTER
#undef CITE
#undef CODE
#undef COMMENT
#undef CONTENT
#undef DD
#undef DFN
#undef DIR
#undef DIV
#undef DL
#undef DT
#undef EM
#undef FONT
#undef FORM
#undef FRAME
#undef FRAMESET
#undef HEAD
#undef HR
#undef HTML
#undef I
#undef IMG
#undef IMPLIED
#undef INPUT
#undef ISINDEX
#undef KBD
#undef LI
#undef LINK
#undef MAP
#undef MENU
#undef META
#undef NOBR
#undef NOFRAMES
#undef OBJECT
#undef OL
#undef OPTION
#undef P
#undef PARAM
#undef PRE
#undef S
#undef SAMP
#undef SCRIPT
#undef SELECT
#undef SMALL
#undef SPAN
#undef STRIKE
#undef STRONG
#undef STYLE
#undef SUB
#undef SUP
#undef TABLE
#undef TD
#undef TEXTAREA
#undef TH
#undef TITLE
#undef TR
#undef TT
#undef U
#undef UL
#undef VAR

using $HTML$TagArray = $Array<::javax::swing::text::html::HTML$Tag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTML = ::javax::swing::text::html::HTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTML$Tag_FieldInfo_[] = {
	{"blockTag", "Z", nullptr, 0, $field(HTML$Tag, blockTag)},
	{"breakTag", "Z", nullptr, 0, $field(HTML$Tag, breakTag)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(HTML$Tag, name)},
	{"unknown", "Z", nullptr, 0, $field(HTML$Tag, unknown)},
	{"A", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, A)},
	{"ADDRESS", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, ADDRESS)},
	{"APPLET", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, APPLET)},
	{"AREA", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, AREA)},
	{"B", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, B)},
	{"BASE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BASE)},
	{"BASEFONT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BASEFONT)},
	{"BIG", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BIG)},
	{"BLOCKQUOTE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BLOCKQUOTE)},
	{"BODY", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BODY)},
	{"BR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, BR)},
	{"CAPTION", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, CAPTION)},
	{"CENTER", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, CENTER)},
	{"CITE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, CITE)},
	{"CODE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, CODE)},
	{"DD", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DD)},
	{"DFN", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DFN)},
	{"DIR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DIR)},
	{"DIV", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DIV)},
	{"DL", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DL)},
	{"DT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, DT)},
	{"EM", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, EM)},
	{"FONT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, FONT)},
	{"FORM", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, FORM)},
	{"FRAME", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, FRAME)},
	{"FRAMESET", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, FRAMESET)},
	{"H1", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H1)},
	{"H2", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H2)},
	{"H3", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H3)},
	{"H4", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H4)},
	{"H5", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H5)},
	{"H6", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, H6)},
	{"HEAD", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, HEAD)},
	{"HR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, HR)},
	{"HTML", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, HTML)},
	{"I", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, I)},
	{"IMG", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, IMG)},
	{"INPUT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, INPUT)},
	{"ISINDEX", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, ISINDEX)},
	{"KBD", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, KBD)},
	{"LI", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, LI)},
	{"LINK", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, LINK)},
	{"MAP", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, MAP)},
	{"MENU", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, MENU)},
	{"META", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, META)},
	{"NOBR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $STATIC | $FINAL, $staticField(HTML$Tag, NOBR)},
	{"NOFRAMES", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, NOFRAMES)},
	{"OBJECT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, OBJECT)},
	{"OL", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, OL)},
	{"OPTION", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, OPTION)},
	{"P", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, P)},
	{"PARAM", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, PARAM)},
	{"PRE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, PRE)},
	{"SAMP", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SAMP)},
	{"SCRIPT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SCRIPT)},
	{"SELECT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SELECT)},
	{"SMALL", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SMALL)},
	{"SPAN", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SPAN)},
	{"STRIKE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, STRIKE)},
	{"S", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, S)},
	{"STRONG", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, STRONG)},
	{"STYLE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, STYLE)},
	{"SUB", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SUB)},
	{"SUP", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, SUP)},
	{"TABLE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TABLE)},
	{"TD", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TD)},
	{"TEXTAREA", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TEXTAREA)},
	{"TH", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TH)},
	{"TITLE", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TITLE)},
	{"TR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TR)},
	{"TT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, TT)},
	{"U", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, U)},
	{"UL", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, UL)},
	{"VAR", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, VAR)},
	{"IMPLIED", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, IMPLIED)},
	{"CONTENT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, CONTENT)},
	{"COMMENT", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML$Tag, COMMENT)},
	{"allTags", "[Ljavax/swing/text/html/HTML$Tag;", nullptr, $STATIC | $FINAL, $staticField(HTML$Tag, allTags)},
	{}
};

$MethodInfo _HTML$Tag_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTML$Tag::*)()>(&HTML$Tag::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(HTML$Tag::*)($String*)>(&HTML$Tag::init$))},
	{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PROTECTED, $method(static_cast<void(HTML$Tag::*)($String*,bool,bool)>(&HTML$Tag::init$))},
	{"breaksFlow", "()Z", nullptr, $PUBLIC},
	{"isBlock", "()Z", nullptr, $PUBLIC},
	{"isParagraph", "()Z", nullptr, 0},
	{"isPreformatted", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTML$Tag_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTML$Tag", "javax.swing.text.html.HTML", "Tag", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTML$Tag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTML$Tag",
	"java.lang.Object",
	nullptr,
	_HTML$Tag_FieldInfo_,
	_HTML$Tag_MethodInfo_,
	nullptr,
	nullptr,
	_HTML$Tag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTML"
};

$Object* allocate$HTML$Tag($Class* clazz) {
	return $of($alloc(HTML$Tag));
}

HTML$Tag* HTML$Tag::A = nullptr;
HTML$Tag* HTML$Tag::ADDRESS = nullptr;
HTML$Tag* HTML$Tag::APPLET = nullptr;
HTML$Tag* HTML$Tag::AREA = nullptr;
HTML$Tag* HTML$Tag::B = nullptr;
HTML$Tag* HTML$Tag::BASE = nullptr;
HTML$Tag* HTML$Tag::BASEFONT = nullptr;
HTML$Tag* HTML$Tag::BIG = nullptr;
HTML$Tag* HTML$Tag::BLOCKQUOTE = nullptr;
HTML$Tag* HTML$Tag::BODY = nullptr;
HTML$Tag* HTML$Tag::BR = nullptr;
HTML$Tag* HTML$Tag::CAPTION = nullptr;
HTML$Tag* HTML$Tag::CENTER = nullptr;
HTML$Tag* HTML$Tag::CITE = nullptr;
HTML$Tag* HTML$Tag::CODE = nullptr;
HTML$Tag* HTML$Tag::DD = nullptr;
HTML$Tag* HTML$Tag::DFN = nullptr;
HTML$Tag* HTML$Tag::DIR = nullptr;
HTML$Tag* HTML$Tag::DIV = nullptr;
HTML$Tag* HTML$Tag::DL = nullptr;
HTML$Tag* HTML$Tag::DT = nullptr;
HTML$Tag* HTML$Tag::EM = nullptr;
HTML$Tag* HTML$Tag::FONT = nullptr;
HTML$Tag* HTML$Tag::FORM = nullptr;
HTML$Tag* HTML$Tag::FRAME = nullptr;
HTML$Tag* HTML$Tag::FRAMESET = nullptr;
HTML$Tag* HTML$Tag::H1 = nullptr;
HTML$Tag* HTML$Tag::H2 = nullptr;
HTML$Tag* HTML$Tag::H3 = nullptr;
HTML$Tag* HTML$Tag::H4 = nullptr;
HTML$Tag* HTML$Tag::H5 = nullptr;
HTML$Tag* HTML$Tag::H6 = nullptr;
HTML$Tag* HTML$Tag::HEAD = nullptr;
HTML$Tag* HTML$Tag::HR = nullptr;
HTML$Tag* HTML$Tag::HTML = nullptr;
HTML$Tag* HTML$Tag::I = nullptr;
HTML$Tag* HTML$Tag::IMG = nullptr;
HTML$Tag* HTML$Tag::INPUT = nullptr;
HTML$Tag* HTML$Tag::ISINDEX = nullptr;
HTML$Tag* HTML$Tag::KBD = nullptr;
HTML$Tag* HTML$Tag::LI = nullptr;
HTML$Tag* HTML$Tag::LINK = nullptr;
HTML$Tag* HTML$Tag::MAP = nullptr;
HTML$Tag* HTML$Tag::MENU = nullptr;
HTML$Tag* HTML$Tag::META = nullptr;
HTML$Tag* HTML$Tag::NOBR = nullptr;
HTML$Tag* HTML$Tag::NOFRAMES = nullptr;
HTML$Tag* HTML$Tag::OBJECT = nullptr;
HTML$Tag* HTML$Tag::OL = nullptr;
HTML$Tag* HTML$Tag::OPTION = nullptr;
HTML$Tag* HTML$Tag::P = nullptr;
HTML$Tag* HTML$Tag::PARAM = nullptr;
HTML$Tag* HTML$Tag::PRE = nullptr;
HTML$Tag* HTML$Tag::SAMP = nullptr;
HTML$Tag* HTML$Tag::SCRIPT = nullptr;
HTML$Tag* HTML$Tag::SELECT = nullptr;
HTML$Tag* HTML$Tag::SMALL = nullptr;
HTML$Tag* HTML$Tag::SPAN = nullptr;
HTML$Tag* HTML$Tag::STRIKE = nullptr;
HTML$Tag* HTML$Tag::S = nullptr;
HTML$Tag* HTML$Tag::STRONG = nullptr;
HTML$Tag* HTML$Tag::STYLE = nullptr;
HTML$Tag* HTML$Tag::SUB = nullptr;
HTML$Tag* HTML$Tag::SUP = nullptr;
HTML$Tag* HTML$Tag::TABLE = nullptr;
HTML$Tag* HTML$Tag::TD = nullptr;
HTML$Tag* HTML$Tag::TEXTAREA = nullptr;
HTML$Tag* HTML$Tag::TH = nullptr;
HTML$Tag* HTML$Tag::TITLE = nullptr;
HTML$Tag* HTML$Tag::TR = nullptr;
HTML$Tag* HTML$Tag::TT = nullptr;
HTML$Tag* HTML$Tag::U = nullptr;
HTML$Tag* HTML$Tag::UL = nullptr;
HTML$Tag* HTML$Tag::VAR = nullptr;
HTML$Tag* HTML$Tag::IMPLIED = nullptr;
HTML$Tag* HTML$Tag::CONTENT = nullptr;
HTML$Tag* HTML$Tag::COMMENT = nullptr;
$HTML$TagArray* HTML$Tag::allTags = nullptr;

void HTML$Tag::init$() {
}

void HTML$Tag::init$($String* id) {
	HTML$Tag::init$(id, false, false);
}

void HTML$Tag::init$($String* id, bool causesBreak, bool isBlock) {
	$set(this, name, id);
	this->breakTag = causesBreak;
	this->blockTag = isBlock;
}

bool HTML$Tag::isBlock() {
	return this->blockTag;
}

bool HTML$Tag::breaksFlow() {
	return this->breakTag;
}

bool HTML$Tag::isPreformatted() {
	return (this == HTML$Tag::PRE || this == HTML$Tag::TEXTAREA);
}

$String* HTML$Tag::toString() {
	return this->name;
}

bool HTML$Tag::isParagraph() {
	return (this == HTML$Tag::P || this == HTML$Tag::IMPLIED || this == HTML$Tag::DT || this == HTML$Tag::H1 || this == HTML$Tag::H2 || this == HTML$Tag::H3 || this == HTML$Tag::H4 || this == HTML$Tag::H5 || this == HTML$Tag::H6);
}

void clinit$HTML$Tag($Class* class$) {
	$assignStatic(HTML$Tag::A, $new(HTML$Tag, "a"_s));
	$assignStatic(HTML$Tag::ADDRESS, $new(HTML$Tag, "address"_s));
	$assignStatic(HTML$Tag::APPLET, $new(HTML$Tag, "applet"_s));
	$assignStatic(HTML$Tag::AREA, $new(HTML$Tag, "area"_s));
	$assignStatic(HTML$Tag::B, $new(HTML$Tag, "b"_s));
	$assignStatic(HTML$Tag::BASE, $new(HTML$Tag, "base"_s));
	$assignStatic(HTML$Tag::BASEFONT, $new(HTML$Tag, "basefont"_s));
	$assignStatic(HTML$Tag::BIG, $new(HTML$Tag, "big"_s));
	$assignStatic(HTML$Tag::BLOCKQUOTE, $new(HTML$Tag, "blockquote"_s, true, true));
	$assignStatic(HTML$Tag::BODY, $new(HTML$Tag, "body"_s, true, true));
	$assignStatic(HTML$Tag::BR, $new(HTML$Tag, "br"_s, true, false));
	$assignStatic(HTML$Tag::CAPTION, $new(HTML$Tag, "caption"_s));
	$assignStatic(HTML$Tag::CENTER, $new(HTML$Tag, "center"_s, true, false));
	$assignStatic(HTML$Tag::CITE, $new(HTML$Tag, "cite"_s));
	$assignStatic(HTML$Tag::CODE, $new(HTML$Tag, "code"_s));
	$assignStatic(HTML$Tag::DD, $new(HTML$Tag, "dd"_s, true, true));
	$assignStatic(HTML$Tag::DFN, $new(HTML$Tag, "dfn"_s));
	$assignStatic(HTML$Tag::DIR, $new(HTML$Tag, "dir"_s, true, true));
	$assignStatic(HTML$Tag::DIV, $new(HTML$Tag, "div"_s, true, true));
	$assignStatic(HTML$Tag::DL, $new(HTML$Tag, "dl"_s, true, true));
	$assignStatic(HTML$Tag::DT, $new(HTML$Tag, "dt"_s, true, true));
	$assignStatic(HTML$Tag::EM, $new(HTML$Tag, "em"_s));
	$assignStatic(HTML$Tag::FONT, $new(HTML$Tag, "font"_s));
	$assignStatic(HTML$Tag::FORM, $new(HTML$Tag, "form"_s, true, false));
	$assignStatic(HTML$Tag::FRAME, $new(HTML$Tag, "frame"_s));
	$assignStatic(HTML$Tag::FRAMESET, $new(HTML$Tag, "frameset"_s));
	$assignStatic(HTML$Tag::H1, $new(HTML$Tag, "h1"_s, true, true));
	$assignStatic(HTML$Tag::H2, $new(HTML$Tag, "h2"_s, true, true));
	$assignStatic(HTML$Tag::H3, $new(HTML$Tag, "h3"_s, true, true));
	$assignStatic(HTML$Tag::H4, $new(HTML$Tag, "h4"_s, true, true));
	$assignStatic(HTML$Tag::H5, $new(HTML$Tag, "h5"_s, true, true));
	$assignStatic(HTML$Tag::H6, $new(HTML$Tag, "h6"_s, true, true));
	$assignStatic(HTML$Tag::HEAD, $new(HTML$Tag, "head"_s, true, true));
	$assignStatic(HTML$Tag::HR, $new(HTML$Tag, "hr"_s, true, false));
	$assignStatic(HTML$Tag::HTML, $new(HTML$Tag, "html"_s, true, false));
	$assignStatic(HTML$Tag::I, $new(HTML$Tag, "i"_s));
	$assignStatic(HTML$Tag::IMG, $new(HTML$Tag, "img"_s));
	$assignStatic(HTML$Tag::INPUT, $new(HTML$Tag, "input"_s));
	$assignStatic(HTML$Tag::ISINDEX, $new(HTML$Tag, "isindex"_s, true, false));
	$assignStatic(HTML$Tag::KBD, $new(HTML$Tag, "kbd"_s));
	$assignStatic(HTML$Tag::LI, $new(HTML$Tag, "li"_s, true, true));
	$assignStatic(HTML$Tag::LINK, $new(HTML$Tag, "link"_s));
	$assignStatic(HTML$Tag::MAP, $new(HTML$Tag, "map"_s));
	$assignStatic(HTML$Tag::MENU, $new(HTML$Tag, "menu"_s, true, true));
	$assignStatic(HTML$Tag::META, $new(HTML$Tag, "meta"_s));
	$assignStatic(HTML$Tag::NOBR, $new(HTML$Tag, "nobr"_s));
	$assignStatic(HTML$Tag::NOFRAMES, $new(HTML$Tag, "noframes"_s, true, true));
	$assignStatic(HTML$Tag::OBJECT, $new(HTML$Tag, "object"_s));
	$assignStatic(HTML$Tag::OL, $new(HTML$Tag, "ol"_s, true, true));
	$assignStatic(HTML$Tag::OPTION, $new(HTML$Tag, "option"_s));
	$assignStatic(HTML$Tag::P, $new(HTML$Tag, "p"_s, true, true));
	$assignStatic(HTML$Tag::PARAM, $new(HTML$Tag, "param"_s));
	$assignStatic(HTML$Tag::PRE, $new(HTML$Tag, "pre"_s, true, true));
	$assignStatic(HTML$Tag::SAMP, $new(HTML$Tag, "samp"_s));
	$assignStatic(HTML$Tag::SCRIPT, $new(HTML$Tag, "script"_s));
	$assignStatic(HTML$Tag::SELECT, $new(HTML$Tag, "select"_s));
	$assignStatic(HTML$Tag::SMALL, $new(HTML$Tag, "small"_s));
	$assignStatic(HTML$Tag::SPAN, $new(HTML$Tag, "span"_s));
	$assignStatic(HTML$Tag::STRIKE, $new(HTML$Tag, "strike"_s));
	$assignStatic(HTML$Tag::S, $new(HTML$Tag, "s"_s));
	$assignStatic(HTML$Tag::STRONG, $new(HTML$Tag, "strong"_s));
	$assignStatic(HTML$Tag::STYLE, $new(HTML$Tag, "style"_s));
	$assignStatic(HTML$Tag::SUB, $new(HTML$Tag, "sub"_s));
	$assignStatic(HTML$Tag::SUP, $new(HTML$Tag, "sup"_s));
	$assignStatic(HTML$Tag::TABLE, $new(HTML$Tag, "table"_s, false, true));
	$assignStatic(HTML$Tag::TD, $new(HTML$Tag, "td"_s, true, true));
	$assignStatic(HTML$Tag::TEXTAREA, $new(HTML$Tag, "textarea"_s));
	$assignStatic(HTML$Tag::TH, $new(HTML$Tag, "th"_s, true, true));
	$assignStatic(HTML$Tag::TITLE, $new(HTML$Tag, "title"_s, true, true));
	$assignStatic(HTML$Tag::TR, $new(HTML$Tag, "tr"_s, false, true));
	$assignStatic(HTML$Tag::TT, $new(HTML$Tag, "tt"_s));
	$assignStatic(HTML$Tag::U, $new(HTML$Tag, "u"_s));
	$assignStatic(HTML$Tag::UL, $new(HTML$Tag, "ul"_s, true, true));
	$assignStatic(HTML$Tag::VAR, $new(HTML$Tag, "var"_s));
	$assignStatic(HTML$Tag::IMPLIED, $new(HTML$Tag, "p-implied"_s));
	$assignStatic(HTML$Tag::CONTENT, $new(HTML$Tag, "content"_s));
	$assignStatic(HTML$Tag::COMMENT, $new(HTML$Tag, "comment"_s));
	$assignStatic(HTML$Tag::allTags, $new($HTML$TagArray, {
		HTML$Tag::A,
		HTML$Tag::ADDRESS,
		HTML$Tag::APPLET,
		HTML$Tag::AREA,
		HTML$Tag::B,
		HTML$Tag::BASE,
		HTML$Tag::BASEFONT,
		HTML$Tag::BIG,
		HTML$Tag::BLOCKQUOTE,
		HTML$Tag::BODY,
		HTML$Tag::BR,
		HTML$Tag::CAPTION,
		HTML$Tag::CENTER,
		HTML$Tag::CITE,
		HTML$Tag::CODE,
		HTML$Tag::DD,
		HTML$Tag::DFN,
		HTML$Tag::DIR,
		HTML$Tag::DIV,
		HTML$Tag::DL,
		HTML$Tag::DT,
		HTML$Tag::EM,
		HTML$Tag::FONT,
		HTML$Tag::FORM,
		HTML$Tag::FRAME,
		HTML$Tag::FRAMESET,
		HTML$Tag::H1,
		HTML$Tag::H2,
		HTML$Tag::H3,
		HTML$Tag::H4,
		HTML$Tag::H5,
		HTML$Tag::H6,
		HTML$Tag::HEAD,
		HTML$Tag::HR,
		HTML$Tag::HTML,
		HTML$Tag::I,
		HTML$Tag::IMG,
		HTML$Tag::INPUT,
		HTML$Tag::ISINDEX,
		HTML$Tag::KBD,
		HTML$Tag::LI,
		HTML$Tag::LINK,
		HTML$Tag::MAP,
		HTML$Tag::MENU,
		HTML$Tag::META,
		HTML$Tag::NOBR,
		HTML$Tag::NOFRAMES,
		HTML$Tag::OBJECT,
		HTML$Tag::OL,
		HTML$Tag::OPTION,
		HTML$Tag::P,
		HTML$Tag::PARAM,
		HTML$Tag::PRE,
		HTML$Tag::SAMP,
		HTML$Tag::SCRIPT,
		HTML$Tag::SELECT,
		HTML$Tag::SMALL,
		HTML$Tag::SPAN,
		HTML$Tag::STRIKE,
		HTML$Tag::S,
		HTML$Tag::STRONG,
		HTML$Tag::STYLE,
		HTML$Tag::SUB,
		HTML$Tag::SUP,
		HTML$Tag::TABLE,
		HTML$Tag::TD,
		HTML$Tag::TEXTAREA,
		HTML$Tag::TH,
		HTML$Tag::TITLE,
		HTML$Tag::TR,
		HTML$Tag::TT,
		HTML$Tag::U,
		HTML$Tag::UL,
		HTML$Tag::VAR
	}));
	{
		$HTML::getTag("html"_s);
	}
}

HTML$Tag::HTML$Tag() {
}

$Class* HTML$Tag::load$($String* name, bool initialize) {
	$loadClass(HTML$Tag, name, initialize, &_HTML$Tag_ClassInfo_, clinit$HTML$Tag, allocate$HTML$Tag);
	return class$;
}

$Class* HTML$Tag::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax