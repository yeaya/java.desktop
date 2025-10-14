#ifndef _javax_swing_GroupLayout$SpringDelta_h_
#define _javax_swing_GroupLayout$SpringDelta_h_
//$ class javax.swing.GroupLayout$SpringDelta
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace javax {
	namespace swing {

class GroupLayout$SpringDelta : public ::java::lang::Comparable {
	$class(GroupLayout$SpringDelta, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	GroupLayout$SpringDelta();
	void init$(int32_t index, int32_t delta);
	int32_t compareTo(::javax::swing::GroupLayout$SpringDelta* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual $String* toString() override;
	int32_t index = 0;
	int32_t delta = 0;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$SpringDelta_h_