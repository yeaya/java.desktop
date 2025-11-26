#ifndef _javax_swing_text_html_HTML$Attribute_h_
#define _javax_swing_text_html_HTML$Attribute_h_
//$ class javax.swing.text.html.HTML$Attribute
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACTION")
#undef ACTION
#pragma push_macro("ALIGN")
#undef ALIGN
#pragma push_macro("ALINK")
#undef ALINK
#pragma push_macro("ALT")
#undef ALT
#pragma push_macro("ARCHIVE")
#undef ARCHIVE
#pragma push_macro("BACKGROUND")
#undef BACKGROUND
#pragma push_macro("BGCOLOR")
#undef BGCOLOR
#pragma push_macro("BORDER")
#undef BORDER
#pragma push_macro("CELLPADDING")
#undef CELLPADDING
#pragma push_macro("CELLSPACING")
#undef CELLSPACING
#pragma push_macro("CHECKED")
#undef CHECKED
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("CLASSID")
#undef CLASSID
#pragma push_macro("CLEAR")
#undef CLEAR
#pragma push_macro("CODE")
#undef CODE
#pragma push_macro("CODEBASE")
#undef CODEBASE
#pragma push_macro("CODETYPE")
#undef CODETYPE
#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("COLS")
#undef COLS
#pragma push_macro("COLSPAN")
#undef COLSPAN
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("COMPACT")
#undef COMPACT
#pragma push_macro("CONTENT")
#undef CONTENT
#pragma push_macro("COORDS")
#undef COORDS
#pragma push_macro("DATA")
#undef DATA
#pragma push_macro("DECLARE")
#undef DECLARE
#pragma push_macro("DIR")
#undef DIR
#pragma push_macro("DUMMY")
#undef DUMMY
#pragma push_macro("ENCTYPE")
#undef ENCTYPE
#pragma push_macro("ENDTAG")
#undef ENDTAG
#pragma push_macro("FACE")
#undef FACE
#pragma push_macro("FRAMEBORDER")
#undef FRAMEBORDER
#pragma push_macro("HALIGN")
#undef HALIGN
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("HREF")
#undef HREF
#pragma push_macro("HSPACE")
#undef HSPACE
#pragma push_macro("HTTPEQUIV")
#undef HTTPEQUIV
#pragma push_macro("ID")
#undef ID
#pragma push_macro("ISMAP")
#undef ISMAP
#pragma push_macro("LANG")
#undef LANG
#pragma push_macro("LANGUAGE")
#undef LANGUAGE
#pragma push_macro("LINK")
#undef LINK
#pragma push_macro("LOWSRC")
#undef LOWSRC
#pragma push_macro("MARGINHEIGHT")
#undef MARGINHEIGHT
#pragma push_macro("MARGINWIDTH")
#undef MARGINWIDTH
#pragma push_macro("MAXLENGTH")
#undef MAXLENGTH
#pragma push_macro("MEDIA")
#undef MEDIA
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MULTIPLE")
#undef MULTIPLE
#pragma push_macro("N")
#undef N
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("NOHREF")
#undef NOHREF
#pragma push_macro("NORESIZE")
#undef NORESIZE
#pragma push_macro("NOSHADE")
#undef NOSHADE
#pragma push_macro("NOWRAP")
#undef NOWRAP
#pragma push_macro("PROMPT")
#undef PROMPT
#pragma push_macro("REL")
#undef REL
#pragma push_macro("REV")
#undef REV
#pragma push_macro("ROWS")
#undef ROWS
#pragma push_macro("ROWSPAN")
#undef ROWSPAN
#pragma push_macro("SCROLLING")
#undef SCROLLING
#pragma push_macro("SELECTED")
#undef SELECTED
#pragma push_macro("SHAPE")
#undef SHAPE
#pragma push_macro("SHAPES")
#undef SHAPES
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SRC")
#undef SRC
#pragma push_macro("STANDBY")
#undef STANDBY
#pragma push_macro("START")
#undef START
#pragma push_macro("STYLE")
#undef STYLE
#pragma push_macro("TARGET")
#undef TARGET
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("TITLE")
#undef TITLE
#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("USEMAP")
#undef USEMAP
#pragma push_macro("VALIGN")
#undef VALIGN
#pragma push_macro("VALUE")
#undef VALUE
#pragma push_macro("VALUETYPE")
#undef VALUETYPE
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("VLINK")
#undef VLINK
#pragma push_macro("VSPACE")
#undef VSPACE
#pragma push_macro("WIDTH")
#undef WIDTH

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTML$Attribute : public ::java::lang::Object {
	$class(HTML$Attribute, 0, ::java::lang::Object)
public:
	HTML$Attribute();
	void init$($String* id);
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::javax::swing::text::html::HTML$Attribute* SIZE;
	static ::javax::swing::text::html::HTML$Attribute* COLOR;
	static ::javax::swing::text::html::HTML$Attribute* CLEAR;
	static ::javax::swing::text::html::HTML$Attribute* BACKGROUND;
	static ::javax::swing::text::html::HTML$Attribute* BGCOLOR;
	static ::javax::swing::text::html::HTML$Attribute* TEXT;
	static ::javax::swing::text::html::HTML$Attribute* LINK;
	static ::javax::swing::text::html::HTML$Attribute* VLINK;
	static ::javax::swing::text::html::HTML$Attribute* ALINK;
	static ::javax::swing::text::html::HTML$Attribute* WIDTH;
	static ::javax::swing::text::html::HTML$Attribute* HEIGHT;
	static ::javax::swing::text::html::HTML$Attribute* ALIGN;
	static ::javax::swing::text::html::HTML$Attribute* NAME;
	static ::javax::swing::text::html::HTML$Attribute* HREF;
	static ::javax::swing::text::html::HTML$Attribute* REL;
	static ::javax::swing::text::html::HTML$Attribute* REV;
	static ::javax::swing::text::html::HTML$Attribute* TITLE;
	static ::javax::swing::text::html::HTML$Attribute* TARGET;
	static ::javax::swing::text::html::HTML$Attribute* SHAPE;
	static ::javax::swing::text::html::HTML$Attribute* COORDS;
	static ::javax::swing::text::html::HTML$Attribute* ISMAP;
	static ::javax::swing::text::html::HTML$Attribute* NOHREF;
	static ::javax::swing::text::html::HTML$Attribute* ALT;
	static ::javax::swing::text::html::HTML$Attribute* ID;
	static ::javax::swing::text::html::HTML$Attribute* SRC;
	static ::javax::swing::text::html::HTML$Attribute* HSPACE;
	static ::javax::swing::text::html::HTML$Attribute* VSPACE;
	static ::javax::swing::text::html::HTML$Attribute* USEMAP;
	static ::javax::swing::text::html::HTML$Attribute* LOWSRC;
	static ::javax::swing::text::html::HTML$Attribute* CODEBASE;
	static ::javax::swing::text::html::HTML$Attribute* CODE;
	static ::javax::swing::text::html::HTML$Attribute* ARCHIVE;
	static ::javax::swing::text::html::HTML$Attribute* VALUE;
	static ::javax::swing::text::html::HTML$Attribute* VALUETYPE;
	static ::javax::swing::text::html::HTML$Attribute* TYPE;
	static ::javax::swing::text::html::HTML$Attribute* CLASS;
	static ::javax::swing::text::html::HTML$Attribute* STYLE;
	static ::javax::swing::text::html::HTML$Attribute* LANG;
	static ::javax::swing::text::html::HTML$Attribute* FACE;
	static ::javax::swing::text::html::HTML$Attribute* DIR;
	static ::javax::swing::text::html::HTML$Attribute* DECLARE;
	static ::javax::swing::text::html::HTML$Attribute* CLASSID;
	static ::javax::swing::text::html::HTML$Attribute* DATA;
	static ::javax::swing::text::html::HTML$Attribute* CODETYPE;
	static ::javax::swing::text::html::HTML$Attribute* STANDBY;
	static ::javax::swing::text::html::HTML$Attribute* BORDER;
	static ::javax::swing::text::html::HTML$Attribute* SHAPES;
	static ::javax::swing::text::html::HTML$Attribute* NOSHADE;
	static ::javax::swing::text::html::HTML$Attribute* COMPACT;
	static ::javax::swing::text::html::HTML$Attribute* START;
	static ::javax::swing::text::html::HTML$Attribute* ACTION;
	static ::javax::swing::text::html::HTML$Attribute* METHOD;
	static ::javax::swing::text::html::HTML$Attribute* ENCTYPE;
	static ::javax::swing::text::html::HTML$Attribute* CHECKED;
	static ::javax::swing::text::html::HTML$Attribute* MAXLENGTH;
	static ::javax::swing::text::html::HTML$Attribute* MULTIPLE;
	static ::javax::swing::text::html::HTML$Attribute* SELECTED;
	static ::javax::swing::text::html::HTML$Attribute* ROWS;
	static ::javax::swing::text::html::HTML$Attribute* COLS;
	static ::javax::swing::text::html::HTML$Attribute* DUMMY;
	static ::javax::swing::text::html::HTML$Attribute* CELLSPACING;
	static ::javax::swing::text::html::HTML$Attribute* CELLPADDING;
	static ::javax::swing::text::html::HTML$Attribute* VALIGN;
	static ::javax::swing::text::html::HTML$Attribute* HALIGN;
	static ::javax::swing::text::html::HTML$Attribute* NOWRAP;
	static ::javax::swing::text::html::HTML$Attribute* ROWSPAN;
	static ::javax::swing::text::html::HTML$Attribute* COLSPAN;
	static ::javax::swing::text::html::HTML$Attribute* PROMPT;
	static ::javax::swing::text::html::HTML$Attribute* HTTPEQUIV;
	static ::javax::swing::text::html::HTML$Attribute* CONTENT;
	static ::javax::swing::text::html::HTML$Attribute* LANGUAGE;
	static ::javax::swing::text::html::HTML$Attribute* VERSION;
	static ::javax::swing::text::html::HTML$Attribute* N;
	static ::javax::swing::text::html::HTML$Attribute* FRAMEBORDER;
	static ::javax::swing::text::html::HTML$Attribute* MARGINWIDTH;
	static ::javax::swing::text::html::HTML$Attribute* MARGINHEIGHT;
	static ::javax::swing::text::html::HTML$Attribute* SCROLLING;
	static ::javax::swing::text::html::HTML$Attribute* NORESIZE;
	static ::javax::swing::text::html::HTML$Attribute* ENDTAG;
	static ::javax::swing::text::html::HTML$Attribute* COMMENT;
	static ::javax::swing::text::html::HTML$Attribute* MEDIA;
	static $Array<::javax::swing::text::html::HTML$Attribute>* allAttributes;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("ACTION")
#pragma pop_macro("ALIGN")
#pragma pop_macro("ALINK")
#pragma pop_macro("ALT")
#pragma pop_macro("ARCHIVE")
#pragma pop_macro("BACKGROUND")
#pragma pop_macro("BGCOLOR")
#pragma pop_macro("BORDER")
#pragma pop_macro("CELLPADDING")
#pragma pop_macro("CELLSPACING")
#pragma pop_macro("CHECKED")
#pragma pop_macro("CLASS")
#pragma pop_macro("CLASSID")
#pragma pop_macro("CLEAR")
#pragma pop_macro("CODE")
#pragma pop_macro("CODEBASE")
#pragma pop_macro("CODETYPE")
#pragma pop_macro("COLOR")
#pragma pop_macro("COLS")
#pragma pop_macro("COLSPAN")
#pragma pop_macro("COMMENT")
#pragma pop_macro("COMPACT")
#pragma pop_macro("CONTENT")
#pragma pop_macro("COORDS")
#pragma pop_macro("DATA")
#pragma pop_macro("DECLARE")
#pragma pop_macro("DIR")
#pragma pop_macro("DUMMY")
#pragma pop_macro("ENCTYPE")
#pragma pop_macro("ENDTAG")
#pragma pop_macro("FACE")
#pragma pop_macro("FRAMEBORDER")
#pragma pop_macro("HALIGN")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("HREF")
#pragma pop_macro("HSPACE")
#pragma pop_macro("HTTPEQUIV")
#pragma pop_macro("ID")
#pragma pop_macro("ISMAP")
#pragma pop_macro("LANG")
#pragma pop_macro("LANGUAGE")
#pragma pop_macro("LINK")
#pragma pop_macro("LOWSRC")
#pragma pop_macro("MARGINHEIGHT")
#pragma pop_macro("MARGINWIDTH")
#pragma pop_macro("MAXLENGTH")
#pragma pop_macro("MEDIA")
#pragma pop_macro("METHOD")
#pragma pop_macro("MULTIPLE")
#pragma pop_macro("N")
#pragma pop_macro("NAME")
#pragma pop_macro("NOHREF")
#pragma pop_macro("NORESIZE")
#pragma pop_macro("NOSHADE")
#pragma pop_macro("NOWRAP")
#pragma pop_macro("PROMPT")
#pragma pop_macro("REL")
#pragma pop_macro("REV")
#pragma pop_macro("ROWS")
#pragma pop_macro("ROWSPAN")
#pragma pop_macro("SCROLLING")
#pragma pop_macro("SELECTED")
#pragma pop_macro("SHAPE")
#pragma pop_macro("SHAPES")
#pragma pop_macro("SIZE")
#pragma pop_macro("SRC")
#pragma pop_macro("STANDBY")
#pragma pop_macro("START")
#pragma pop_macro("STYLE")
#pragma pop_macro("TARGET")
#pragma pop_macro("TEXT")
#pragma pop_macro("TITLE")
#pragma pop_macro("TYPE")
#pragma pop_macro("USEMAP")
#pragma pop_macro("VALIGN")
#pragma pop_macro("VALUE")
#pragma pop_macro("VALUETYPE")
#pragma pop_macro("VERSION")
#pragma pop_macro("VLINK")
#pragma pop_macro("VSPACE")
#pragma pop_macro("WIDTH")

#endif // _javax_swing_text_html_HTML$Attribute_h_