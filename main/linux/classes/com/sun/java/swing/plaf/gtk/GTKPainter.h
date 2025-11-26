#ifndef _com_sun_java_swing_plaf_gtk_GTKPainter_h_
#define _com_sun_java_swing_plaf_gtk_GTKPainter_h_
//$ class com.sun.java.swing.plaf.gtk.GTKPainter
//$ extends javax.swing.plaf.synth.SynthPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/SynthPainter.h>

#pragma push_macro("ENGINE")
#undef ENGINE
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("POSITIONS")
#undef POSITIONS
#pragma push_macro("SHADOWS")
#undef SHADOWS

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKConstants$ArrowType;
						class GTKConstants$Orientation;
						class GTKConstants$PositionType;
						class GTKConstants$ShadowType;
						class GTKEngine;
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
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ColorType;
				class Region;
				class SynthContext;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKPainter : public ::javax::swing::plaf::synth::SynthPainter {
	$class(GTKPainter, 0, ::javax::swing::plaf::synth::SynthPainter)
public:
	GTKPainter();
	void init$();
	void fillArea(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::javax::swing::plaf::synth::ColorType* colorType);
	$String* getName(::javax::swing::plaf::synth::SynthContext* context);
	virtual void paintArrowButtonBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintArrowButtonForeground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) override;
	virtual void paintAscendingSortIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintButtonBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void paintButtonBackgroundImpl(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::plaf::synth::Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, bool paintBackground, bool paintFocus, bool defaultCapable, bool toolButton);
	virtual void paintCheckBoxBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintCheckBoxIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintCheckBoxMenuItemBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintCheckBoxMenuItemCheckIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	void paintComponentBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintDescendingSortIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintDesktopIconBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintDesktopPaneBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintEditorPaneBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintFocus(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::plaf::synth::Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintFormattedTextFieldBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::lang::reflect::Method* paintMethod, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::lang::reflect::Method* paintMethod, int32_t x, int32_t y, int32_t w, int32_t h, Object$* direction);
	virtual void paintInternalFrameBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintLabelBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintListBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintMenuArrowIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* dir);
	virtual void paintMenuBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintMenuBarBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintMenuItemBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintMetacityElement(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t gtkState, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadow, ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* direction);
	virtual void paintPasswordFieldBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintPopupMenuBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintProgressBarBackground;
	virtual void paintProgressBarBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintProgressBarForeground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) override;
	virtual void paintRadioButtonBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintRadioButtonIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintRadioButtonMenuItemBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintRadioButtonMenuItemCheckIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintRootPaneBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintScrollBarBackground;
	virtual void paintScrollBarBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintScrollBarThumbBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dir) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintSeparatorBackground;
	virtual void paintSeparatorBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) override;
	virtual void paintSliderThumbBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dir) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintSliderTrackBackground;
	virtual void paintSliderTrackBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintSpinnerBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintSplitPaneDividerBackground;
	virtual void paintSplitPaneDividerBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintSplitPaneDragDivider(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) override;
	virtual void paintTabbedPaneContentBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintTabbedPaneTabBackground;
	virtual void paintTabbedPaneTabBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) override;
	virtual void paintTextAreaBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void paintTextBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintTextFieldBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintTextPaneBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintToggleButtonBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintToolBarBackground;
	virtual void paintToolBarBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintToolBarContentBackground;
	virtual void paintToolBarContentBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::synth::SynthPainter::paintToolBarDragWindowBackground;
	virtual void paintToolBarDragWindowBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintToolBarHandleIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* orientation);
	virtual void paintToolTipBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintTreeBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintTreeCellBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void paintTreeCellEditorBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintTreeCellFocus(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintTreeCollapsedIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintTreeExpandedIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintViewportBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintViewportBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	static bool $assertionsDisabled;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>* POSITIONS;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>* SHADOWS;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine* ENGINE;
	static ::com::sun::java::swing::plaf::gtk::GTKPainter* INSTANCE;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ENGINE")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("POSITIONS")
#pragma pop_macro("SHADOWS")

#endif // _com_sun_java_swing_plaf_gtk_GTKPainter_h_