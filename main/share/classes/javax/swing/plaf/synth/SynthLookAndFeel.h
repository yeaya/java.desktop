#ifndef _javax_swing_plaf_synth_SynthLookAndFeel_h_
#define _javax_swing_plaf_synth_SynthLookAndFeel_h_
//$ class javax.swing.plaf.synth.SynthLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

#pragma push_macro("EMPTY_UIRESOURCE_INSETS")
#undef EMPTY_UIRESOURCE_INSETS
#pragma push_macro("SELECTED_UI_KEY")
#undef SELECTED_UI_KEY
#pragma push_macro("SELECTED_UI_STATE_KEY")
#undef SELECTED_UI_STATE_KEY
#pragma push_macro("STYLE_FACTORY_KEY")
#undef STYLE_FACTORY_KEY

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace io {
		class InputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace net {
		class URL;
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
			namespace synth {
				class Region;
				class SynthContext;
				class SynthLookAndFeel$Handler;
				class SynthStyle;
				class SynthStyleFactory;
				class SynthUI;
			}
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(SynthLookAndFeel, 0, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	SynthLookAndFeel();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static void flushUnreferenced();
	static int32_t getComponentState(::java::awt::Component* c);
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	static ::java::awt::Insets* getPaintingInsets(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Insets* insets);
	static ::javax::swing::plaf::synth::Region* getRegion(::javax::swing::JComponent* c);
	static ::javax::swing::plaf::ComponentUI* getSelectedUI();
	static int32_t getSelectedUIState();
	static ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	static ::javax::swing::plaf::synth::SynthStyleFactory* getStyleFactory();
	static $Object* getUIOfType(::javax::swing::plaf::ComponentUI* ui, $Class* klass);
	virtual void initialize() override;
	static bool isLeftToRight(::java::awt::Component* c);
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	virtual void load(::java::io::InputStream* input, $Class* resourceBase);
	virtual void load(::java::net::URL* url);
	static void paintRegion(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Graphics* g, ::java::awt::Rectangle* bounds);
	static void resetSelectedUI();
	static void setSelectedUI(::javax::swing::plaf::ComponentUI* uix, bool selected, bool focused, bool enabled, bool rollover);
	static void setStyleFactory(::javax::swing::plaf::synth::SynthStyleFactory* cache);
	static bool shouldUpdateStyle(::java::beans::PropertyChangeEvent* event);
	virtual bool shouldUpdateStyleOnAncestorChanged();
	virtual bool shouldUpdateStyleOnEvent(::java::beans::PropertyChangeEvent* ev);
	virtual void uninitialize() override;
	static void update(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Graphics* g);
	static ::javax::swing::plaf::synth::SynthStyle* updateStyle(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::SynthUI* ui);
	static void updateStyles(::java::awt::Component* c);
	static void updateSubregion(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Graphics* g, ::java::awt::Rectangle* bounds);
	static bool useLAFConditions();
	void writeObject(::java::io::ObjectOutputStream* out);
	static ::java::awt::Insets* EMPTY_UIRESOURCE_INSETS;
	static $Object* STYLE_FACTORY_KEY;
	static $Object* SELECTED_UI_KEY;
	static $Object* SELECTED_UI_STATE_KEY;
	static ::javax::swing::plaf::synth::SynthStyleFactory* lastFactory;
	static ::sun::awt::AppContext* lastContext;
	::javax::swing::plaf::synth::SynthStyleFactory* factory = nullptr;
	::java::util::Map* defaultsMap = nullptr;
	::javax::swing::plaf::synth::SynthLookAndFeel$Handler* _handler = nullptr;
	static ::java::lang::ref::ReferenceQueue* queue;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("EMPTY_UIRESOURCE_INSETS")
#pragma pop_macro("SELECTED_UI_KEY")
#pragma pop_macro("SELECTED_UI_STATE_KEY")
#pragma pop_macro("STYLE_FACTORY_KEY")

#endif // _javax_swing_plaf_synth_SynthLookAndFeel_h_