#ifndef _java_awt_font_OpenType_h_
#define _java_awt_font_OpenType_h_
//$ interface java.awt.font.OpenType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TAG_ACNT")
#undef TAG_ACNT
#pragma push_macro("TAG_AVAR")
#undef TAG_AVAR
#pragma push_macro("TAG_BASE")
#undef TAG_BASE
#pragma push_macro("TAG_BDAT")
#undef TAG_BDAT
#pragma push_macro("TAG_BLOC")
#undef TAG_BLOC
#pragma push_macro("TAG_BSLN")
#undef TAG_BSLN
#pragma push_macro("TAG_CFF")
#undef TAG_CFF
#pragma push_macro("TAG_CMAP")
#undef TAG_CMAP
#pragma push_macro("TAG_CVAR")
#undef TAG_CVAR
#pragma push_macro("TAG_CVT")
#undef TAG_CVT
#pragma push_macro("TAG_DSIG")
#undef TAG_DSIG
#pragma push_macro("TAG_EBDT")
#undef TAG_EBDT
#pragma push_macro("TAG_EBLC")
#undef TAG_EBLC
#pragma push_macro("TAG_EBSC")
#undef TAG_EBSC
#pragma push_macro("TAG_FDSC")
#undef TAG_FDSC
#pragma push_macro("TAG_FEAT")
#undef TAG_FEAT
#pragma push_macro("TAG_FMTX")
#undef TAG_FMTX
#pragma push_macro("TAG_FPGM")
#undef TAG_FPGM
#pragma push_macro("TAG_FVAR")
#undef TAG_FVAR
#pragma push_macro("TAG_GASP")
#undef TAG_GASP
#pragma push_macro("TAG_GDEF")
#undef TAG_GDEF
#pragma push_macro("TAG_GLYF")
#undef TAG_GLYF
#pragma push_macro("TAG_GPOS")
#undef TAG_GPOS
#pragma push_macro("TAG_GSUB")
#undef TAG_GSUB
#pragma push_macro("TAG_GVAR")
#undef TAG_GVAR
#pragma push_macro("TAG_HDMX")
#undef TAG_HDMX
#pragma push_macro("TAG_HEAD")
#undef TAG_HEAD
#pragma push_macro("TAG_HHEA")
#undef TAG_HHEA
#pragma push_macro("TAG_HMTX")
#undef TAG_HMTX
#pragma push_macro("TAG_JSTF")
#undef TAG_JSTF
#pragma push_macro("TAG_JUST")
#undef TAG_JUST
#pragma push_macro("TAG_KERN")
#undef TAG_KERN
#pragma push_macro("TAG_LCAR")
#undef TAG_LCAR
#pragma push_macro("TAG_LOCA")
#undef TAG_LOCA
#pragma push_macro("TAG_LTSH")
#undef TAG_LTSH
#pragma push_macro("TAG_MAXP")
#undef TAG_MAXP
#pragma push_macro("TAG_MMFX")
#undef TAG_MMFX
#pragma push_macro("TAG_MMSD")
#undef TAG_MMSD
#pragma push_macro("TAG_MORT")
#undef TAG_MORT
#pragma push_macro("TAG_NAME")
#undef TAG_NAME
#pragma push_macro("TAG_OPBD")
#undef TAG_OPBD
#pragma push_macro("TAG_OS2")
#undef TAG_OS2
#pragma push_macro("TAG_PCLT")
#undef TAG_PCLT
#pragma push_macro("TAG_POST")
#undef TAG_POST
#pragma push_macro("TAG_PREP")
#undef TAG_PREP
#pragma push_macro("TAG_PROP")
#undef TAG_PROP
#pragma push_macro("TAG_TRAK")
#undef TAG_TRAK
#pragma push_macro("TAG_TYP1")
#undef TAG_TYP1
#pragma push_macro("TAG_VDMX")
#undef TAG_VDMX
#pragma push_macro("TAG_VHEA")
#undef TAG_VHEA
#pragma push_macro("TAG_VMTX")
#undef TAG_VMTX

namespace java {
	namespace awt {
		namespace font {

class $export OpenType : public ::java::lang::Object {
	$interface(OpenType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* getFontTable(int32_t sfntTag) {return nullptr;}
	virtual $bytes* getFontTable($String* strSfntTag) {return nullptr;}
	virtual $bytes* getFontTable(int32_t sfntTag, int32_t offset, int32_t count) {return nullptr;}
	virtual $bytes* getFontTable($String* strSfntTag, int32_t offset, int32_t count) {return nullptr;}
	virtual int32_t getFontTableSize(int32_t sfntTag) {return 0;}
	virtual int32_t getFontTableSize($String* strSfntTag) {return 0;}
	virtual int32_t getVersion() {return 0;}
	static const int32_t TAG_CMAP = 0x636D6170;
	static const int32_t TAG_HEAD = 0x68656164;
	static const int32_t TAG_NAME = 0x6E616D65;
	static const int32_t TAG_GLYF = 0x676C7966;
	static const int32_t TAG_MAXP = 0x6D617870;
	static const int32_t TAG_PREP = 0x70726570;
	static const int32_t TAG_HMTX = 0x686D7478;
	static const int32_t TAG_KERN = 0x6B65726E;
	static const int32_t TAG_HDMX = 0x68646D78;
	static const int32_t TAG_LOCA = 0x6C6F6361;
	static const int32_t TAG_POST = 0x706F7374;
	static const int32_t TAG_OS2 = 0x4F532F32;
	static const int32_t TAG_CVT = 0x63767420;
	static const int32_t TAG_GASP = 0x67617370;
	static const int32_t TAG_VDMX = 0x56444D58;
	static const int32_t TAG_VMTX = 0x766D7478;
	static const int32_t TAG_VHEA = 0x76686561;
	static const int32_t TAG_HHEA = 0x68686561;
	static const int32_t TAG_TYP1 = 0x74797031;
	static const int32_t TAG_BSLN = 0x62736C6E;
	static const int32_t TAG_GSUB = 0x47535542;
	static const int32_t TAG_DSIG = 0x44534947;
	static const int32_t TAG_FPGM = 0x6670676D;
	static const int32_t TAG_FVAR = 0x66766172;
	static const int32_t TAG_GVAR = 0x67766172;
	static const int32_t TAG_CFF = 0x43464620;
	static const int32_t TAG_MMSD = 0x4D4D5344;
	static const int32_t TAG_MMFX = 0x4D4D4658;
	static const int32_t TAG_BASE = 0x42415345;
	static const int32_t TAG_GDEF = 0x47444546;
	static const int32_t TAG_GPOS = 0x47504F53;
	static const int32_t TAG_JSTF = 0x4A535446;
	static const int32_t TAG_EBDT = 0x45424454;
	static const int32_t TAG_EBLC = 0x45424C43;
	static const int32_t TAG_EBSC = 0x45425343;
	static const int32_t TAG_LTSH = 0x4C545348;
	static const int32_t TAG_PCLT = 0x50434C54;
	static const int32_t TAG_ACNT = 0x61636E74;
	static const int32_t TAG_AVAR = 0x61766172;
	static const int32_t TAG_BDAT = 0x62646174;
	static const int32_t TAG_BLOC = 0x626C6F63;
	static const int32_t TAG_CVAR = 0x63766172;
	static const int32_t TAG_FEAT = 0x66656174;
	static const int32_t TAG_FDSC = 0x66647363;
	static const int32_t TAG_FMTX = 0x666D7478;
	static const int32_t TAG_JUST = 0x6A757374;
	static const int32_t TAG_LCAR = 0x6C636172;
	static const int32_t TAG_MORT = 0x6D6F7274;
	static const int32_t TAG_OPBD = 0x6F706264;
	static const int32_t TAG_PROP = 0x70726F70;
	static const int32_t TAG_TRAK = 0x7472616B;
};

		} // font
	} // awt
} // java

#pragma pop_macro("TAG_ACNT")
#pragma pop_macro("TAG_AVAR")
#pragma pop_macro("TAG_BASE")
#pragma pop_macro("TAG_BDAT")
#pragma pop_macro("TAG_BLOC")
#pragma pop_macro("TAG_BSLN")
#pragma pop_macro("TAG_CFF")
#pragma pop_macro("TAG_CMAP")
#pragma pop_macro("TAG_CVAR")
#pragma pop_macro("TAG_CVT")
#pragma pop_macro("TAG_DSIG")
#pragma pop_macro("TAG_EBDT")
#pragma pop_macro("TAG_EBLC")
#pragma pop_macro("TAG_EBSC")
#pragma pop_macro("TAG_FDSC")
#pragma pop_macro("TAG_FEAT")
#pragma pop_macro("TAG_FMTX")
#pragma pop_macro("TAG_FPGM")
#pragma pop_macro("TAG_FVAR")
#pragma pop_macro("TAG_GASP")
#pragma pop_macro("TAG_GDEF")
#pragma pop_macro("TAG_GLYF")
#pragma pop_macro("TAG_GPOS")
#pragma pop_macro("TAG_GSUB")
#pragma pop_macro("TAG_GVAR")
#pragma pop_macro("TAG_HDMX")
#pragma pop_macro("TAG_HEAD")
#pragma pop_macro("TAG_HHEA")
#pragma pop_macro("TAG_HMTX")
#pragma pop_macro("TAG_JSTF")
#pragma pop_macro("TAG_JUST")
#pragma pop_macro("TAG_KERN")
#pragma pop_macro("TAG_LCAR")
#pragma pop_macro("TAG_LOCA")
#pragma pop_macro("TAG_LTSH")
#pragma pop_macro("TAG_MAXP")
#pragma pop_macro("TAG_MMFX")
#pragma pop_macro("TAG_MMSD")
#pragma pop_macro("TAG_MORT")
#pragma pop_macro("TAG_NAME")
#pragma pop_macro("TAG_OPBD")
#pragma pop_macro("TAG_OS2")
#pragma pop_macro("TAG_PCLT")
#pragma pop_macro("TAG_POST")
#pragma pop_macro("TAG_PREP")
#pragma pop_macro("TAG_PROP")
#pragma pop_macro("TAG_TRAK")
#pragma pop_macro("TAG_TYP1")
#pragma pop_macro("TAG_VDMX")
#pragma pop_macro("TAG_VHEA")
#pragma pop_macro("TAG_VMTX")

#endif // _java_awt_font_OpenType_h_