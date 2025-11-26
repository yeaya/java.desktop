#ifndef _sun_java2d_marlin_CollinearSimplifier$SimplifierState_h_
#define _sun_java2d_marlin_CollinearSimplifier$SimplifierState_h_
//$ class sun.java2d.marlin.CollinearSimplifier$SimplifierState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class CollinearSimplifier$SimplifierState : public ::java::lang::Enum {
	$class(CollinearSimplifier$SimplifierState, 0, ::java::lang::Enum)
public:
	CollinearSimplifier$SimplifierState();
	static $Array<::sun::java2d::marlin::CollinearSimplifier$SimplifierState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::java2d::marlin::CollinearSimplifier$SimplifierState* valueOf($String* name);
	static $Array<::sun::java2d::marlin::CollinearSimplifier$SimplifierState>* values();
	static ::sun::java2d::marlin::CollinearSimplifier$SimplifierState* Empty;
	static ::sun::java2d::marlin::CollinearSimplifier$SimplifierState* PreviousPoint;
	static ::sun::java2d::marlin::CollinearSimplifier$SimplifierState* PreviousLine;
	static $Array<::sun::java2d::marlin::CollinearSimplifier$SimplifierState>* $VALUES;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_CollinearSimplifier$SimplifierState_h_