#ifndef _sun_swing_SwingUtilities2$Section_h_
#define _sun_swing_SwingUtilities2$Section_h_
//$ class sun.swing.SwingUtilities2$Section
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LEADING")
#undef LEADING
#pragma push_macro("MIDDLE")
#undef MIDDLE
#pragma push_macro("TRAILING")
#undef TRAILING

namespace sun {
	namespace swing {

class $export SwingUtilities2$Section : public ::java::lang::Enum {
	$class(SwingUtilities2$Section, 0, ::java::lang::Enum)
public:
	SwingUtilities2$Section();
	static $Array<::sun::swing::SwingUtilities2$Section>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::swing::SwingUtilities2$Section* valueOf($String* name);
	static $Array<::sun::swing::SwingUtilities2$Section>* values();
	static ::sun::swing::SwingUtilities2$Section* LEADING;
	static ::sun::swing::SwingUtilities2$Section* MIDDLE;
	static ::sun::swing::SwingUtilities2$Section* TRAILING;
	static $Array<::sun::swing::SwingUtilities2$Section>* $VALUES;
};

	} // swing
} // sun

#pragma pop_macro("LEADING")
#pragma pop_macro("MIDDLE")
#pragma pop_macro("TRAILING")

#endif // _sun_swing_SwingUtilities2$Section_h_