#ifndef _javax_swing_GroupLayout$AutoPreferredGapMatch_h_
#define _javax_swing_GroupLayout$AutoPreferredGapMatch_h_
//$ class javax.swing.GroupLayout$AutoPreferredGapMatch
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class GroupLayout$ComponentSpring;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$AutoPreferredGapMatch : public ::java::lang::Object {
	$class(GroupLayout$AutoPreferredGapMatch, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GroupLayout$AutoPreferredGapMatch();
	void init$(::javax::swing::GroupLayout$ComponentSpring* source, ::javax::swing::GroupLayout$ComponentSpring* target);
	$String* toString(::javax::swing::GroupLayout$ComponentSpring* spring);
	virtual $String* toString() override;
	::javax::swing::GroupLayout$ComponentSpring* source = nullptr;
	::javax::swing::GroupLayout$ComponentSpring* target = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$AutoPreferredGapMatch_h_