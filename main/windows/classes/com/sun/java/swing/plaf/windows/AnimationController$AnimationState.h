#ifndef _com_sun_java_swing_plaf_windows_AnimationController$AnimationState_h_
#define _com_sun_java_swing_plaf_windows_AnimationController$AnimationState_h_
//$ class com.sun.java.swing.plaf.windows.AnimationController$AnimationState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$State;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export AnimationController$AnimationState : public ::java::lang::Object {
	$class(AnimationController$AnimationState, 0, ::java::lang::Object)
public:
	AnimationController$AnimationState();
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$State* startState, int64_t milliseconds, bool isForwardAndReverse);
	virtual bool isDone();
	virtual void paintSkin(::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin, ::java::awt::Graphics* _g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	void updateProgress();
	static bool $assertionsDisabled;
	::com::sun::java::swing::plaf::windows::TMSchema$State* startState = nullptr;
	int64_t duration = 0;
	int64_t startTime = 0;
	bool isForward = false;
	bool isForwardAndReverse = false;
	float progress = 0.0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_AnimationController$AnimationState_h_