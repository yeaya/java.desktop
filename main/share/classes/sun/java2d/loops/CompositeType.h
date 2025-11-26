#ifndef _sun_java2d_loops_CompositeType_h_
#define _sun_java2d_loops_CompositeType_h_
//$ class sun.java2d.loops.CompositeType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DESC_ALPHA_XOR")
#undef DESC_ALPHA_XOR
#pragma push_macro("DESC_ANY")
#undef DESC_ANY
#pragma push_macro("DESC_ANY_ALPHA")
#undef DESC_ANY_ALPHA
#pragma push_macro("DESC_CLEAR")
#undef DESC_CLEAR
#pragma push_macro("DESC_DST")
#undef DESC_DST
#pragma push_macro("DESC_DST_ATOP")
#undef DESC_DST_ATOP
#pragma push_macro("DESC_DST_IN")
#undef DESC_DST_IN
#pragma push_macro("DESC_DST_OUT")
#undef DESC_DST_OUT
#pragma push_macro("DESC_DST_OVER")
#undef DESC_DST_OVER
#pragma push_macro("DESC_SRC")
#undef DESC_SRC
#pragma push_macro("DESC_SRC_ATOP")
#undef DESC_SRC_ATOP
#pragma push_macro("DESC_SRC_IN")
#undef DESC_SRC_IN
#pragma push_macro("DESC_SRC_NO_EA")
#undef DESC_SRC_NO_EA
#pragma push_macro("DESC_SRC_OUT")
#undef DESC_SRC_OUT
#pragma push_macro("DESC_SRC_OVER")
#undef DESC_SRC_OVER
#pragma push_macro("DESC_SRC_OVER_NO_EA")
#undef DESC_SRC_OVER_NO_EA
#pragma push_macro("DESC_XOR")
#undef DESC_XOR

namespace java {
	namespace awt {
		class AlphaComposite;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class CompositeType : public ::java::lang::Object {
	$class(CompositeType, 0, ::java::lang::Object)
public:
	CompositeType();
	void init$(::sun::java2d::loops::CompositeType* parent, $String* desc);
	::sun::java2d::loops::CompositeType* deriveSubType($String* desc);
	virtual bool equals(Object$* o) override;
	static ::sun::java2d::loops::CompositeType* forAlphaComposite(::java::awt::AlphaComposite* ac);
	$String* getDescriptor();
	::sun::java2d::loops::CompositeType* getSuperType();
	int32_t getUniqueID();
	virtual int32_t hashCode() override;
	bool isDerivedFrom(::sun::java2d::loops::CompositeType* other);
	static int32_t makeUniqueID($String* desc);
	virtual $String* toString() override;
	static int32_t unusedUID;
	static ::java::util::HashMap* compositeUIDMap;
	static $String* DESC_ANY;
	static $String* DESC_XOR;
	static $String* DESC_CLEAR;
	static $String* DESC_SRC;
	static $String* DESC_DST;
	static $String* DESC_SRC_OVER;
	static $String* DESC_DST_OVER;
	static $String* DESC_SRC_IN;
	static $String* DESC_DST_IN;
	static $String* DESC_SRC_OUT;
	static $String* DESC_DST_OUT;
	static $String* DESC_SRC_ATOP;
	static $String* DESC_DST_ATOP;
	static $String* DESC_ALPHA_XOR;
	static $String* DESC_SRC_NO_EA;
	static $String* DESC_SRC_OVER_NO_EA;
	static $String* DESC_ANY_ALPHA;
	static ::sun::java2d::loops::CompositeType* Any;
	static ::sun::java2d::loops::CompositeType* General;
	static ::sun::java2d::loops::CompositeType* AnyAlpha;
	static ::sun::java2d::loops::CompositeType* Xor;
	static ::sun::java2d::loops::CompositeType* Clear;
	static ::sun::java2d::loops::CompositeType* Src;
	static ::sun::java2d::loops::CompositeType* Dst;
	static ::sun::java2d::loops::CompositeType* SrcOver;
	static ::sun::java2d::loops::CompositeType* DstOver;
	static ::sun::java2d::loops::CompositeType* SrcIn;
	static ::sun::java2d::loops::CompositeType* DstIn;
	static ::sun::java2d::loops::CompositeType* SrcOut;
	static ::sun::java2d::loops::CompositeType* DstOut;
	static ::sun::java2d::loops::CompositeType* SrcAtop;
	static ::sun::java2d::loops::CompositeType* DstAtop;
	static ::sun::java2d::loops::CompositeType* AlphaXor;
	static ::sun::java2d::loops::CompositeType* SrcNoEa;
	static ::sun::java2d::loops::CompositeType* SrcOverNoEa;
	static ::sun::java2d::loops::CompositeType* OpaqueSrcOverNoEa;
	int32_t uniqueID = 0;
	$String* desc = nullptr;
	::sun::java2d::loops::CompositeType* next = nullptr;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("DESC_ALPHA_XOR")
#pragma pop_macro("DESC_ANY")
#pragma pop_macro("DESC_ANY_ALPHA")
#pragma pop_macro("DESC_CLEAR")
#pragma pop_macro("DESC_DST")
#pragma pop_macro("DESC_DST_ATOP")
#pragma pop_macro("DESC_DST_IN")
#pragma pop_macro("DESC_DST_OUT")
#pragma pop_macro("DESC_DST_OVER")
#pragma pop_macro("DESC_SRC")
#pragma pop_macro("DESC_SRC_ATOP")
#pragma pop_macro("DESC_SRC_IN")
#pragma pop_macro("DESC_SRC_NO_EA")
#pragma pop_macro("DESC_SRC_OUT")
#pragma pop_macro("DESC_SRC_OVER")
#pragma pop_macro("DESC_SRC_OVER_NO_EA")
#pragma pop_macro("DESC_XOR")

#endif // _sun_java2d_loops_CompositeType_h_