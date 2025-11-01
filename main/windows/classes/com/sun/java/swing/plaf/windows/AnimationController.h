#ifndef _com_sun_java_swing_plaf_windows_AnimationController_h_
#define _com_sun_java_swing_plaf_windows_AnimationController_h_
//$ class com.sun.java.swing.plaf.windows.AnimationController
//$ extends java.awt.event.ActionListener
//$ implements java.beans.PropertyChangeListener

#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>

#pragma push_macro("ANIMATION_CONTROLLER_KEY")
#undef ANIMATION_CONTROLLER_KEY
#pragma push_macro("VISTA_ANIMATION_DISABLED")
#undef VISTA_ANIMATION_DISABLED

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
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
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class Timer;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export AnimationController : public ::java::awt::event::ActionListener, public ::java::beans::PropertyChangeListener {
	$class(AnimationController, 0, ::java::awt::event::ActionListener, ::java::beans::PropertyChangeListener)
public:
	AnimationController();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void dispose();
	static ::com::sun::java::swing::plaf::windows::AnimationController* getAnimationController();
	::com::sun::java::swing::plaf::windows::TMSchema$State* getState(::javax::swing::JComponent* component, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* normalizeState(::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	static void paintSkin(::javax::swing::JComponent* component, ::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin, ::java::awt::Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	void putState(::javax::swing::JComponent* component, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	void startAnimation(::javax::swing::JComponent* component, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* startState, ::com::sun::java::swing::plaf::windows::TMSchema$State* endState, int64_t millis);
	virtual $String* toString() override;
	static void triggerAnimation(::javax::swing::JComponent* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* newState);
	static bool VISTA_ANIMATION_DISABLED;
	static $Object* ANIMATION_CONTROLLER_KEY;
	::java::util::Map* animationStateMap = nullptr;
	::javax::swing::Timer* timer = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ANIMATION_CONTROLLER_KEY")
#pragma pop_macro("VISTA_ANIMATION_DISABLED")

#endif // _com_sun_java_swing_plaf_windows_AnimationController_h_