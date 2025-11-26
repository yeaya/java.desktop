#ifndef _sun_font_EAttribute_h_
#define _sun_font_EAttribute_h_
//$ class sun.font.EAttribute
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EBACKGROUND")
#undef EBACKGROUND
#pragma push_macro("EBASELINE_TRANSFORM")
#undef EBASELINE_TRANSFORM
#pragma push_macro("EBIDI_EMBEDDING")
#undef EBIDI_EMBEDDING
#pragma push_macro("ECHAR_REPLACEMENT")
#undef ECHAR_REPLACEMENT
#pragma push_macro("EFAMILY")
#undef EFAMILY
#pragma push_macro("EFONT")
#undef EFONT
#pragma push_macro("EFOREGROUND")
#undef EFOREGROUND
#pragma push_macro("EINPUT_METHOD_HIGHLIGHT")
#undef EINPUT_METHOD_HIGHLIGHT
#pragma push_macro("EINPUT_METHOD_UNDERLINE")
#undef EINPUT_METHOD_UNDERLINE
#pragma push_macro("EJUSTIFICATION")
#undef EJUSTIFICATION
#pragma push_macro("EKERNING")
#undef EKERNING
#pragma push_macro("ELIGATURES")
#undef ELIGATURES
#pragma push_macro("ENUMERIC_SHAPING")
#undef ENUMERIC_SHAPING
#pragma push_macro("EPOSTURE")
#undef EPOSTURE
#pragma push_macro("ERUN_DIRECTION")
#undef ERUN_DIRECTION
#pragma push_macro("ESIZE")
#undef ESIZE
#pragma push_macro("ESTRIKETHROUGH")
#undef ESTRIKETHROUGH
#pragma push_macro("ESUPERSCRIPT")
#undef ESUPERSCRIPT
#pragma push_macro("ESWAP_COLORS")
#undef ESWAP_COLORS
#pragma push_macro("ETRACKING")
#undef ETRACKING
#pragma push_macro("ETRANSFORM")
#undef ETRANSFORM
#pragma push_macro("EUNDERLINE")
#undef EUNDERLINE
#pragma push_macro("EWEIGHT")
#undef EWEIGHT
#pragma push_macro("EWIDTH")
#undef EWIDTH

namespace java {
	namespace awt {
		namespace font {
			class TextAttribute;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
	}
}

namespace sun {
	namespace font {

class EAttribute : public ::java::lang::Enum {
	$class(EAttribute, 0, ::java::lang::Enum)
public:
	EAttribute();
	static $Array<::sun::font::EAttribute>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::awt::font::TextAttribute* ta);
	static ::sun::font::EAttribute* forAttribute(::java::text::AttributedCharacterIterator$Attribute* ta);
	virtual $String* toString() override;
	static ::sun::font::EAttribute* valueOf($String* name);
	static $Array<::sun::font::EAttribute>* values();
	static ::sun::font::EAttribute* EFAMILY;
	static ::sun::font::EAttribute* EWEIGHT;
	static ::sun::font::EAttribute* EWIDTH;
	static ::sun::font::EAttribute* EPOSTURE;
	static ::sun::font::EAttribute* ESIZE;
	static ::sun::font::EAttribute* ETRANSFORM;
	static ::sun::font::EAttribute* ESUPERSCRIPT;
	static ::sun::font::EAttribute* EFONT;
	static ::sun::font::EAttribute* ECHAR_REPLACEMENT;
	static ::sun::font::EAttribute* EFOREGROUND;
	static ::sun::font::EAttribute* EBACKGROUND;
	static ::sun::font::EAttribute* EUNDERLINE;
	static ::sun::font::EAttribute* ESTRIKETHROUGH;
	static ::sun::font::EAttribute* ERUN_DIRECTION;
	static ::sun::font::EAttribute* EBIDI_EMBEDDING;
	static ::sun::font::EAttribute* EJUSTIFICATION;
	static ::sun::font::EAttribute* EINPUT_METHOD_HIGHLIGHT;
	static ::sun::font::EAttribute* EINPUT_METHOD_UNDERLINE;
	static ::sun::font::EAttribute* ESWAP_COLORS;
	static ::sun::font::EAttribute* ENUMERIC_SHAPING;
	static ::sun::font::EAttribute* EKERNING;
	static ::sun::font::EAttribute* ELIGATURES;
	static ::sun::font::EAttribute* ETRACKING;
	static ::sun::font::EAttribute* EBASELINE_TRANSFORM;
	static $Array<::sun::font::EAttribute>* $VALUES;
	int32_t mask = 0;
	::java::awt::font::TextAttribute* att = nullptr;
	static $Array<::sun::font::EAttribute>* atts;
};

	} // font
} // sun

#pragma pop_macro("EBACKGROUND")
#pragma pop_macro("EBASELINE_TRANSFORM")
#pragma pop_macro("EBIDI_EMBEDDING")
#pragma pop_macro("ECHAR_REPLACEMENT")
#pragma pop_macro("EFAMILY")
#pragma pop_macro("EFONT")
#pragma pop_macro("EFOREGROUND")
#pragma pop_macro("EINPUT_METHOD_HIGHLIGHT")
#pragma pop_macro("EINPUT_METHOD_UNDERLINE")
#pragma pop_macro("EJUSTIFICATION")
#pragma pop_macro("EKERNING")
#pragma pop_macro("ELIGATURES")
#pragma pop_macro("ENUMERIC_SHAPING")
#pragma pop_macro("EPOSTURE")
#pragma pop_macro("ERUN_DIRECTION")
#pragma pop_macro("ESIZE")
#pragma pop_macro("ESTRIKETHROUGH")
#pragma pop_macro("ESUPERSCRIPT")
#pragma pop_macro("ESWAP_COLORS")
#pragma pop_macro("ETRACKING")
#pragma pop_macro("ETRANSFORM")
#pragma pop_macro("EUNDERLINE")
#pragma pop_macro("EWEIGHT")
#pragma pop_macro("EWIDTH")

#endif // _sun_font_EAttribute_h_