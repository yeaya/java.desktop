#ifndef _javax_swing_plaf_multi_MultiUIDefaults_h_
#define _javax_swing_plaf_multi_MultiUIDefaults_h_
//$ class javax.swing.plaf.multi.MultiUIDefaults
//$ extends javax.swing.UIDefaults

#include <javax/swing/UIDefaults.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

class MultiUIDefaults : public ::javax::swing::UIDefaults {
	$class(MultiUIDefaults, $NO_CLASS_INIT, ::javax::swing::UIDefaults)
public:
	MultiUIDefaults();
	void init$(int32_t initialCapacity, float loadFactor);
	virtual void getUIError($String* msg) override;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiUIDefaults_h_