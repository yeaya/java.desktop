#ifndef _java_awt_AlphaComposite_h_
#define _java_awt_AlphaComposite_h_
//$ class java.awt.AlphaComposite
//$ extends java.awt.Composite

#include <java/awt/Composite.h>

#pragma push_macro("CLEAR")
#undef CLEAR
#pragma push_macro("DST")
#undef DST
#pragma push_macro("DST_ATOP")
#undef DST_ATOP
#pragma push_macro("DST_IN")
#undef DST_IN
#pragma push_macro("DST_OUT")
#undef DST_OUT
#pragma push_macro("DST_OVER")
#undef DST_OVER
#pragma push_macro("MAX_RULE")
#undef MAX_RULE
#pragma push_macro("MIN_RULE")
#undef MIN_RULE
#pragma push_macro("SRC")
#undef SRC
#pragma push_macro("SRC_ATOP")
#undef SRC_ATOP
#pragma push_macro("SRC_IN")
#undef SRC_IN
#pragma push_macro("SRC_OUT")
#undef SRC_OUT
#pragma push_macro("SRC_OVER")
#undef SRC_OVER
#pragma push_macro("XOR")
#undef XOR

namespace java {
	namespace awt {
		class CompositeContext;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {

class $import AlphaComposite : public ::java::awt::Composite {
	$class(AlphaComposite, 0, ::java::awt::Composite)
public:
	AlphaComposite();
	void init$(int32_t rule);
	void init$(int32_t rule, float alpha);
	virtual ::java::awt::CompositeContext* createContext(::java::awt::image::ColorModel* srcColorModel, ::java::awt::image::ColorModel* dstColorModel, ::java::awt::RenderingHints* hints) override;
	::java::awt::AlphaComposite* derive(int32_t rule);
	::java::awt::AlphaComposite* derive(float alpha);
	virtual bool equals(Object$* obj) override;
	float getAlpha();
	static ::java::awt::AlphaComposite* getInstance(int32_t rule);
	static ::java::awt::AlphaComposite* getInstance(int32_t rule, float alpha);
	int32_t getRule();
	virtual int32_t hashCode() override;
	static const int32_t CLEAR = 1;
	static const int32_t SRC = 2;
	static const int32_t DST = 9;
	static const int32_t SRC_OVER = 3;
	static const int32_t DST_OVER = 4;
	static const int32_t SRC_IN = 5;
	static const int32_t DST_IN = 6;
	static const int32_t SRC_OUT = 7;
	static const int32_t DST_OUT = 8;
	static const int32_t SRC_ATOP = 10;
	static const int32_t DST_ATOP = 11;
	static const int32_t XOR = 12;
	static ::java::awt::AlphaComposite* Clear;
	static ::java::awt::AlphaComposite* Src;
	static ::java::awt::AlphaComposite* Dst;
	static ::java::awt::AlphaComposite* SrcOver;
	static ::java::awt::AlphaComposite* DstOver;
	static ::java::awt::AlphaComposite* SrcIn;
	static ::java::awt::AlphaComposite* DstIn;
	static ::java::awt::AlphaComposite* SrcOut;
	static ::java::awt::AlphaComposite* DstOut;
	static ::java::awt::AlphaComposite* SrcAtop;
	static ::java::awt::AlphaComposite* DstAtop;
	static ::java::awt::AlphaComposite* Xor;
	static const int32_t MIN_RULE = CLEAR;
	static const int32_t MAX_RULE = XOR;
	float extraAlpha = 0.0;
	int32_t rule = 0;
};

	} // awt
} // java

#pragma pop_macro("CLEAR")
#pragma pop_macro("DST")
#pragma pop_macro("DST_ATOP")
#pragma pop_macro("DST_IN")
#pragma pop_macro("DST_OUT")
#pragma pop_macro("DST_OVER")
#pragma pop_macro("MAX_RULE")
#pragma pop_macro("MIN_RULE")
#pragma pop_macro("SRC")
#pragma pop_macro("SRC_ATOP")
#pragma pop_macro("SRC_IN")
#pragma pop_macro("SRC_OUT")
#pragma pop_macro("SRC_OVER")
#pragma pop_macro("XOR")

#endif // _java_awt_AlphaComposite_h_