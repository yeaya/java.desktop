#ifndef _javax_swing_plaf_multi_MultiLookAndFeel_h_
#define _javax_swing_plaf_multi_MultiLookAndFeel_h_
//$ class javax.swing.plaf.multi.MultiLookAndFeel
//$ extends javax.swing.LookAndFeel

#include <java/lang/Array.h>
#include <javax/swing/LookAndFeel.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

class $export MultiLookAndFeel : public ::javax::swing::LookAndFeel {
	$class(MultiLookAndFeel, $NO_CLASS_INIT, ::javax::swing::LookAndFeel)
public:
	MultiLookAndFeel();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUIs(::javax::swing::plaf::ComponentUI* mui, ::java::util::Vector* uis, ::javax::swing::JComponent* target);
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	static $Array<::javax::swing::plaf::ComponentUI>* uisToArray(::java::util::Vector* uis);
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiLookAndFeel_h_