#ifndef _javax_swing_text_html_HTML$Tag_h_
#define _javax_swing_text_html_HTML$Tag_h_
//$ class javax.swing.text.html.HTML$Tag
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("ADDRESS")
#undef ADDRESS
#pragma push_macro("APPLET")
#undef APPLET
#pragma push_macro("AREA")
#undef AREA
#pragma push_macro("B")
#undef B
#pragma push_macro("BASE")
#undef BASE
#pragma push_macro("BASEFONT")
#undef BASEFONT
#pragma push_macro("BIG")
#undef BIG
#pragma push_macro("BLOCKQUOTE")
#undef BLOCKQUOTE
#pragma push_macro("BODY")
#undef BODY
#pragma push_macro("BR")
#undef BR
#pragma push_macro("CAPTION")
#undef CAPTION
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("CITE")
#undef CITE
#pragma push_macro("CODE")
#undef CODE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("CONTENT")
#undef CONTENT
#pragma push_macro("DD")
#undef DD
#pragma push_macro("DFN")
#undef DFN
#pragma push_macro("DIR")
#undef DIR
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("DL")
#undef DL
#pragma push_macro("DT")
#undef DT
#pragma push_macro("EM")
#undef EM
#pragma push_macro("FONT")
#undef FONT
#pragma push_macro("FORM")
#undef FORM
#pragma push_macro("FRAME")
#undef FRAME
#pragma push_macro("FRAMESET")
#undef FRAMESET
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("HR")
#undef HR
#pragma push_macro("HTML")
#undef HTML
#pragma push_macro("I")
#undef I
#pragma push_macro("IMG")
#undef IMG
#pragma push_macro("IMPLIED")
#undef IMPLIED
#pragma push_macro("INPUT")
#undef INPUT
#pragma push_macro("ISINDEX")
#undef ISINDEX
#pragma push_macro("KBD")
#undef KBD
#pragma push_macro("LI")
#undef LI
#pragma push_macro("LINK")
#undef LINK
#pragma push_macro("MAP")
#undef MAP
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("META")
#undef META
#pragma push_macro("NOBR")
#undef NOBR
#pragma push_macro("NOFRAMES")
#undef NOFRAMES
#pragma push_macro("OBJECT")
#undef OBJECT
#pragma push_macro("OL")
#undef OL
#pragma push_macro("OPTION")
#undef OPTION
#pragma push_macro("P")
#undef P
#pragma push_macro("PARAM")
#undef PARAM
#pragma push_macro("PRE")
#undef PRE
#pragma push_macro("S")
#undef S
#pragma push_macro("SAMP")
#undef SAMP
#pragma push_macro("SCRIPT")
#undef SCRIPT
#pragma push_macro("SELECT")
#undef SELECT
#pragma push_macro("SMALL")
#undef SMALL
#pragma push_macro("SPAN")
#undef SPAN
#pragma push_macro("STRIKE")
#undef STRIKE
#pragma push_macro("STRONG")
#undef STRONG
#pragma push_macro("STYLE")
#undef STYLE
#pragma push_macro("SUB")
#undef SUB
#pragma push_macro("SUP")
#undef SUP
#pragma push_macro("TABLE")
#undef TABLE
#pragma push_macro("TD")
#undef TD
#pragma push_macro("TEXTAREA")
#undef TEXTAREA
#pragma push_macro("TH")
#undef TH
#pragma push_macro("TITLE")
#undef TITLE
#pragma push_macro("TR")
#undef TR
#pragma push_macro("TT")
#undef TT
#pragma push_macro("U")
#undef U
#pragma push_macro("UL")
#undef UL
#pragma push_macro("VAR")
#undef VAR

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTML$Tag : public ::java::lang::Object {
	$class(HTML$Tag, 0, ::java::lang::Object)
public:
	HTML$Tag();
	void init$();
	void init$($String* id);
	void init$($String* id, bool causesBreak, bool isBlock);
	virtual bool breaksFlow();
	virtual bool isBlock();
	virtual bool isParagraph();
	virtual bool isPreformatted();
	virtual $String* toString() override;
	bool blockTag = false;
	bool breakTag = false;
	$String* name = nullptr;
	bool unknown = false;
	static ::javax::swing::text::html::HTML$Tag* A;
	static ::javax::swing::text::html::HTML$Tag* ADDRESS;
	static ::javax::swing::text::html::HTML$Tag* APPLET;
	static ::javax::swing::text::html::HTML$Tag* AREA;
	static ::javax::swing::text::html::HTML$Tag* B;
	static ::javax::swing::text::html::HTML$Tag* BASE;
	static ::javax::swing::text::html::HTML$Tag* BASEFONT;
	static ::javax::swing::text::html::HTML$Tag* BIG;
	static ::javax::swing::text::html::HTML$Tag* BLOCKQUOTE;
	static ::javax::swing::text::html::HTML$Tag* BODY;
	static ::javax::swing::text::html::HTML$Tag* BR;
	static ::javax::swing::text::html::HTML$Tag* CAPTION;
	static ::javax::swing::text::html::HTML$Tag* CENTER;
	static ::javax::swing::text::html::HTML$Tag* CITE;
	static ::javax::swing::text::html::HTML$Tag* CODE;
	static ::javax::swing::text::html::HTML$Tag* DD;
	static ::javax::swing::text::html::HTML$Tag* DFN;
	static ::javax::swing::text::html::HTML$Tag* DIR;
	static ::javax::swing::text::html::HTML$Tag* DIV;
	static ::javax::swing::text::html::HTML$Tag* DL;
	static ::javax::swing::text::html::HTML$Tag* DT;
	static ::javax::swing::text::html::HTML$Tag* EM;
	static ::javax::swing::text::html::HTML$Tag* FONT;
	static ::javax::swing::text::html::HTML$Tag* FORM;
	static ::javax::swing::text::html::HTML$Tag* FRAME;
	static ::javax::swing::text::html::HTML$Tag* FRAMESET;
	static ::javax::swing::text::html::HTML$Tag* H1;
	static ::javax::swing::text::html::HTML$Tag* H2;
	static ::javax::swing::text::html::HTML$Tag* H3;
	static ::javax::swing::text::html::HTML$Tag* H4;
	static ::javax::swing::text::html::HTML$Tag* H5;
	static ::javax::swing::text::html::HTML$Tag* H6;
	static ::javax::swing::text::html::HTML$Tag* HEAD;
	static ::javax::swing::text::html::HTML$Tag* HR;
	static ::javax::swing::text::html::HTML$Tag* HTML;
	static ::javax::swing::text::html::HTML$Tag* I;
	static ::javax::swing::text::html::HTML$Tag* IMG;
	static ::javax::swing::text::html::HTML$Tag* INPUT;
	static ::javax::swing::text::html::HTML$Tag* ISINDEX;
	static ::javax::swing::text::html::HTML$Tag* KBD;
	static ::javax::swing::text::html::HTML$Tag* LI;
	static ::javax::swing::text::html::HTML$Tag* LINK;
	static ::javax::swing::text::html::HTML$Tag* MAP;
	static ::javax::swing::text::html::HTML$Tag* MENU;
	static ::javax::swing::text::html::HTML$Tag* META;
	static ::javax::swing::text::html::HTML$Tag* NOBR;
	static ::javax::swing::text::html::HTML$Tag* NOFRAMES;
	static ::javax::swing::text::html::HTML$Tag* OBJECT;
	static ::javax::swing::text::html::HTML$Tag* OL;
	static ::javax::swing::text::html::HTML$Tag* OPTION;
	static ::javax::swing::text::html::HTML$Tag* P;
	static ::javax::swing::text::html::HTML$Tag* PARAM;
	static ::javax::swing::text::html::HTML$Tag* PRE;
	static ::javax::swing::text::html::HTML$Tag* SAMP;
	static ::javax::swing::text::html::HTML$Tag* SCRIPT;
	static ::javax::swing::text::html::HTML$Tag* SELECT;
	static ::javax::swing::text::html::HTML$Tag* SMALL;
	static ::javax::swing::text::html::HTML$Tag* SPAN;
	static ::javax::swing::text::html::HTML$Tag* STRIKE;
	static ::javax::swing::text::html::HTML$Tag* S;
	static ::javax::swing::text::html::HTML$Tag* STRONG;
	static ::javax::swing::text::html::HTML$Tag* STYLE;
	static ::javax::swing::text::html::HTML$Tag* SUB;
	static ::javax::swing::text::html::HTML$Tag* SUP;
	static ::javax::swing::text::html::HTML$Tag* TABLE;
	static ::javax::swing::text::html::HTML$Tag* TD;
	static ::javax::swing::text::html::HTML$Tag* TEXTAREA;
	static ::javax::swing::text::html::HTML$Tag* TH;
	static ::javax::swing::text::html::HTML$Tag* TITLE;
	static ::javax::swing::text::html::HTML$Tag* TR;
	static ::javax::swing::text::html::HTML$Tag* TT;
	static ::javax::swing::text::html::HTML$Tag* U;
	static ::javax::swing::text::html::HTML$Tag* UL;
	static ::javax::swing::text::html::HTML$Tag* VAR;
	static ::javax::swing::text::html::HTML$Tag* IMPLIED;
	static ::javax::swing::text::html::HTML$Tag* CONTENT;
	static ::javax::swing::text::html::HTML$Tag* COMMENT;
	static $Array<::javax::swing::text::html::HTML$Tag>* allTags;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("A")
#pragma pop_macro("ADDRESS")
#pragma pop_macro("APPLET")
#pragma pop_macro("AREA")
#pragma pop_macro("B")
#pragma pop_macro("BASE")
#pragma pop_macro("BASEFONT")
#pragma pop_macro("BIG")
#pragma pop_macro("BLOCKQUOTE")
#pragma pop_macro("BODY")
#pragma pop_macro("BR")
#pragma pop_macro("CAPTION")
#pragma pop_macro("CENTER")
#pragma pop_macro("CITE")
#pragma pop_macro("CODE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("CONTENT")
#pragma pop_macro("DD")
#pragma pop_macro("DFN")
#pragma pop_macro("DIR")
#pragma pop_macro("DIV")
#pragma pop_macro("DL")
#pragma pop_macro("DT")
#pragma pop_macro("EM")
#pragma pop_macro("FONT")
#pragma pop_macro("FORM")
#pragma pop_macro("FRAME")
#pragma pop_macro("FRAMESET")
#pragma pop_macro("HEAD")
#pragma pop_macro("HR")
#pragma pop_macro("HTML")
#pragma pop_macro("I")
#pragma pop_macro("IMG")
#pragma pop_macro("IMPLIED")
#pragma pop_macro("INPUT")
#pragma pop_macro("ISINDEX")
#pragma pop_macro("KBD")
#pragma pop_macro("LI")
#pragma pop_macro("LINK")
#pragma pop_macro("MAP")
#pragma pop_macro("MENU")
#pragma pop_macro("META")
#pragma pop_macro("NOBR")
#pragma pop_macro("NOFRAMES")
#pragma pop_macro("OBJECT")
#pragma pop_macro("OL")
#pragma pop_macro("OPTION")
#pragma pop_macro("P")
#pragma pop_macro("PARAM")
#pragma pop_macro("PRE")
#pragma pop_macro("S")
#pragma pop_macro("SAMP")
#pragma pop_macro("SCRIPT")
#pragma pop_macro("SELECT")
#pragma pop_macro("SMALL")
#pragma pop_macro("SPAN")
#pragma pop_macro("STRIKE")
#pragma pop_macro("STRONG")
#pragma pop_macro("STYLE")
#pragma pop_macro("SUB")
#pragma pop_macro("SUP")
#pragma pop_macro("TABLE")
#pragma pop_macro("TD")
#pragma pop_macro("TEXTAREA")
#pragma pop_macro("TH")
#pragma pop_macro("TITLE")
#pragma pop_macro("TR")
#pragma pop_macro("TT")
#pragma pop_macro("U")
#pragma pop_macro("UL")
#pragma pop_macro("VAR")

#endif // _javax_swing_text_html_HTML$Tag_h_