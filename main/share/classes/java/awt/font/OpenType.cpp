#include <java/awt/font/OpenType.h>

#include <jcpp.h>

#undef TAG_ACNT
#undef TAG_AVAR
#undef TAG_BASE
#undef TAG_BDAT
#undef TAG_BLOC
#undef TAG_BSLN
#undef TAG_CFF
#undef TAG_CMAP
#undef TAG_CVAR
#undef TAG_CVT
#undef TAG_DSIG
#undef TAG_EBDT
#undef TAG_EBLC
#undef TAG_EBSC
#undef TAG_FDSC
#undef TAG_FEAT
#undef TAG_FMTX
#undef TAG_FPGM
#undef TAG_FVAR
#undef TAG_GASP
#undef TAG_GDEF
#undef TAG_GLYF
#undef TAG_GPOS
#undef TAG_GSUB
#undef TAG_GVAR
#undef TAG_HDMX
#undef TAG_HEAD
#undef TAG_HHEA
#undef TAG_HMTX
#undef TAG_JSTF
#undef TAG_JUST
#undef TAG_KERN
#undef TAG_LCAR
#undef TAG_LOCA
#undef TAG_LTSH
#undef TAG_MAXP
#undef TAG_MMFX
#undef TAG_MMSD
#undef TAG_MORT
#undef TAG_NAME
#undef TAG_OPBD
#undef TAG_OS2
#undef TAG_PCLT
#undef TAG_POST
#undef TAG_PREP
#undef TAG_PROP
#undef TAG_TRAK
#undef TAG_TYP1
#undef TAG_VDMX
#undef TAG_VHEA
#undef TAG_VMTX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _OpenType_FieldInfo_[] = {
	{"TAG_CMAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_CMAP)},
	{"TAG_HEAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_HEAD)},
	{"TAG_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_NAME)},
	{"TAG_GLYF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GLYF)},
	{"TAG_MAXP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_MAXP)},
	{"TAG_PREP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_PREP)},
	{"TAG_HMTX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_HMTX)},
	{"TAG_KERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_KERN)},
	{"TAG_HDMX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_HDMX)},
	{"TAG_LOCA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_LOCA)},
	{"TAG_POST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_POST)},
	{"TAG_OS2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_OS2)},
	{"TAG_CVT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_CVT)},
	{"TAG_GASP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GASP)},
	{"TAG_VDMX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_VDMX)},
	{"TAG_VMTX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_VMTX)},
	{"TAG_VHEA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_VHEA)},
	{"TAG_HHEA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_HHEA)},
	{"TAG_TYP1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_TYP1)},
	{"TAG_BSLN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_BSLN)},
	{"TAG_GSUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GSUB)},
	{"TAG_DSIG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_DSIG)},
	{"TAG_FPGM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_FPGM)},
	{"TAG_FVAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_FVAR)},
	{"TAG_GVAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GVAR)},
	{"TAG_CFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_CFF)},
	{"TAG_MMSD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_MMSD)},
	{"TAG_MMFX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_MMFX)},
	{"TAG_BASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_BASE)},
	{"TAG_GDEF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GDEF)},
	{"TAG_GPOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_GPOS)},
	{"TAG_JSTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_JSTF)},
	{"TAG_EBDT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_EBDT)},
	{"TAG_EBLC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_EBLC)},
	{"TAG_EBSC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_EBSC)},
	{"TAG_LTSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_LTSH)},
	{"TAG_PCLT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_PCLT)},
	{"TAG_ACNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_ACNT)},
	{"TAG_AVAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_AVAR)},
	{"TAG_BDAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_BDAT)},
	{"TAG_BLOC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_BLOC)},
	{"TAG_CVAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_CVAR)},
	{"TAG_FEAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_FEAT)},
	{"TAG_FDSC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_FDSC)},
	{"TAG_FMTX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_FMTX)},
	{"TAG_JUST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_JUST)},
	{"TAG_LCAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_LCAR)},
	{"TAG_MORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_MORT)},
	{"TAG_OPBD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_OPBD)},
	{"TAG_PROP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_PROP)},
	{"TAG_TRAK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpenType, TAG_TRAK)},
	{}
};

$MethodInfo _OpenType_MethodInfo_[] = {
	{"getFontTable", "(I)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontTable", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontTable", "(III)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontTable", "(Ljava/lang/String;II)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontTableSize", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontTableSize", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVersion", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.font.OpenType",
	nullptr,
	nullptr,
	_OpenType_FieldInfo_,
	_OpenType_MethodInfo_
};

$Object* allocate$OpenType($Class* clazz) {
	return $of($alloc(OpenType));
}

$Class* OpenType::load$($String* name, bool initialize) {
	$loadClass(OpenType, name, initialize, &_OpenType_ClassInfo_, allocate$OpenType);
	return class$;
}

$Class* OpenType::class$ = nullptr;

		} // font
	} // awt
} // java