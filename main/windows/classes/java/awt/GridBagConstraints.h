#ifndef _java_awt_GridBagConstraints_h_
#define _java_awt_GridBagConstraints_h_
//$ class java.awt.GridBagConstraints
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ABOVE_BASELINE")
#undef ABOVE_BASELINE
#pragma push_macro("ABOVE_BASELINE_LEADING")
#undef ABOVE_BASELINE_LEADING
#pragma push_macro("ABOVE_BASELINE_TRAILING")
#undef ABOVE_BASELINE_TRAILING
#pragma push_macro("BASELINE")
#undef BASELINE
#pragma push_macro("BASELINE_LEADING")
#undef BASELINE_LEADING
#pragma push_macro("BASELINE_TRAILING")
#undef BASELINE_TRAILING
#pragma push_macro("BELOW_BASELINE")
#undef BELOW_BASELINE
#pragma push_macro("BELOW_BASELINE_LEADING")
#undef BELOW_BASELINE_LEADING
#pragma push_macro("BELOW_BASELINE_TRAILING")
#undef BELOW_BASELINE_TRAILING
#pragma push_macro("BOTH")
#undef BOTH
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("EAST")
#undef EAST
#pragma push_macro("FIRST_LINE_END")
#undef FIRST_LINE_END
#pragma push_macro("FIRST_LINE_START")
#undef FIRST_LINE_START
#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("LAST_LINE_END")
#undef LAST_LINE_END
#pragma push_macro("LAST_LINE_START")
#undef LAST_LINE_START
#pragma push_macro("LINE_END")
#undef LINE_END
#pragma push_macro("LINE_START")
#undef LINE_START
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NORTH")
#undef NORTH
#pragma push_macro("NORTHEAST")
#undef NORTHEAST
#pragma push_macro("NORTHWEST")
#undef NORTHWEST
#pragma push_macro("PAGE_END")
#undef PAGE_END
#pragma push_macro("PAGE_START")
#undef PAGE_START
#pragma push_macro("RELATIVE")
#undef RELATIVE
#pragma push_macro("REMAINDER")
#undef REMAINDER
#pragma push_macro("SOUTH")
#undef SOUTH
#pragma push_macro("SOUTHEAST")
#undef SOUTHEAST
#pragma push_macro("SOUTHWEST")
#undef SOUTHWEST
#pragma push_macro("VERTICAL")
#undef VERTICAL
#pragma push_macro("WEST")
#undef WEST

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Insets;
	}
}

namespace java {
	namespace awt {

class $export GridBagConstraints : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(GridBagConstraints, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	GridBagConstraints();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t gridx, int32_t gridy, int32_t gridwidth, int32_t gridheight, double weightx, double weighty, int32_t anchor, int32_t fill, ::java::awt::Insets* insets, int32_t ipadx, int32_t ipady);
	virtual $Object* clone() override;
	virtual bool isVerticallyResizable();
	virtual $String* toString() override;
	static const int32_t RELATIVE = (-1);
	static const int32_t REMAINDER = 0;
	static const int32_t NONE = 0;
	static const int32_t BOTH = 1;
	static const int32_t HORIZONTAL = 2;
	static const int32_t VERTICAL = 3;
	static const int32_t CENTER = 10;
	static const int32_t NORTH = 11;
	static const int32_t NORTHEAST = 12;
	static const int32_t EAST = 13;
	static const int32_t SOUTHEAST = 14;
	static const int32_t SOUTH = 15;
	static const int32_t SOUTHWEST = 16;
	static const int32_t WEST = 17;
	static const int32_t NORTHWEST = 18;
	static const int32_t PAGE_START = 19;
	static const int32_t PAGE_END = 20;
	static const int32_t LINE_START = 21;
	static const int32_t LINE_END = 22;
	static const int32_t FIRST_LINE_START = 23;
	static const int32_t FIRST_LINE_END = 24;
	static const int32_t LAST_LINE_START = 25;
	static const int32_t LAST_LINE_END = 26;
	static const int32_t BASELINE = 256;
	static const int32_t BASELINE_LEADING = 512;
	static const int32_t BASELINE_TRAILING = 768;
	static const int32_t ABOVE_BASELINE = 1024;
	static const int32_t ABOVE_BASELINE_LEADING = 1280;
	static const int32_t ABOVE_BASELINE_TRAILING = 1536;
	static const int32_t BELOW_BASELINE = 1792;
	static const int32_t BELOW_BASELINE_LEADING = 2048;
	static const int32_t BELOW_BASELINE_TRAILING = 2304;
	int32_t gridx = 0;
	int32_t gridy = 0;
	int32_t gridwidth = 0;
	int32_t gridheight = 0;
	double weightx = 0.0;
	double weighty = 0.0;
	int32_t anchor = 0;
	int32_t fill = 0;
	::java::awt::Insets* insets = nullptr;
	int32_t ipadx = 0;
	int32_t ipady = 0;
	int32_t tempX = 0;
	int32_t tempY = 0;
	int32_t tempWidth = 0;
	int32_t tempHeight = 0;
	int32_t minWidth = 0;
	int32_t minHeight = 0;
	int32_t ascent = 0;
	int32_t descent = 0;
	::java::awt::Component$BaselineResizeBehavior* baselineResizeBehavior = nullptr;
	int32_t centerPadding = 0;
	int32_t centerOffset = 0;
	static const int64_t serialVersionUID = (int64_t)0xF21F090ECFE626CF;
};

	} // awt
} // java

#pragma pop_macro("ABOVE_BASELINE")
#pragma pop_macro("ABOVE_BASELINE_LEADING")
#pragma pop_macro("ABOVE_BASELINE_TRAILING")
#pragma pop_macro("BASELINE")
#pragma pop_macro("BASELINE_LEADING")
#pragma pop_macro("BASELINE_TRAILING")
#pragma pop_macro("BELOW_BASELINE")
#pragma pop_macro("BELOW_BASELINE_LEADING")
#pragma pop_macro("BELOW_BASELINE_TRAILING")
#pragma pop_macro("BOTH")
#pragma pop_macro("CENTER")
#pragma pop_macro("EAST")
#pragma pop_macro("FIRST_LINE_END")
#pragma pop_macro("FIRST_LINE_START")
#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("LAST_LINE_END")
#pragma pop_macro("LAST_LINE_START")
#pragma pop_macro("LINE_END")
#pragma pop_macro("LINE_START")
#pragma pop_macro("NONE")
#pragma pop_macro("NORTH")
#pragma pop_macro("NORTHEAST")
#pragma pop_macro("NORTHWEST")
#pragma pop_macro("PAGE_END")
#pragma pop_macro("PAGE_START")
#pragma pop_macro("RELATIVE")
#pragma pop_macro("REMAINDER")
#pragma pop_macro("SOUTH")
#pragma pop_macro("SOUTHEAST")
#pragma pop_macro("SOUTHWEST")
#pragma pop_macro("VERTICAL")
#pragma pop_macro("WEST")

#endif // _java_awt_GridBagConstraints_h_