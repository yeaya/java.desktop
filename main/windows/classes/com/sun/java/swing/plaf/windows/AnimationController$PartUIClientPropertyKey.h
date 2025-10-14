#ifndef _com_sun_java_swing_plaf_windows_AnimationController$PartUIClientPropertyKey_h_
#define _com_sun_java_swing_plaf_windows_AnimationController$PartUIClientPropertyKey_h_
//$ class com.sun.java.swing.plaf.windows.AnimationController$PartUIClientPropertyKey
//$ extends javax.swing.UIClientPropertyKey

#include <javax/swing/UIClientPropertyKey.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export AnimationController$PartUIClientPropertyKey : public ::javax::swing::UIClientPropertyKey {
	$class(AnimationController$PartUIClientPropertyKey, 0, ::javax::swing::UIClientPropertyKey)
public:
	AnimationController$PartUIClientPropertyKey();
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	static ::com::sun::java::swing::plaf::windows::AnimationController$PartUIClientPropertyKey* getKey(::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual $String* toString() override;
	static ::java::util::Map* map;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* part = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_AnimationController$PartUIClientPropertyKey_h_