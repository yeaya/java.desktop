#ifndef _javax_swing_plaf_basic_BasicTextUI_h_
#define _javax_swing_plaf_basic_BasicTextUI_h_
//$ class javax.swing.plaf.basic.BasicTextUI
//$ extends javax.swing.plaf.TextUI
//$ implements javax.swing.text.ViewFactory

#include <java/lang/Array.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/ViewFactory.h>

#pragma push_macro("DEFAULT_CARET_MARGIN")
#undef DEFAULT_CARET_MARGIN

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class ActionMap;
		class InputMap;
		class JComponent;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTextUI$BasicCursor;
				class BasicTextUI$DragListener;
				class BasicTextUI$RootView;
				class BasicTextUI$UpdateHandler;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class DefaultCaret;
			class EditorKit;
			class Element;
			class Highlighter;
			class JTextComponent;
			class Keymap;
			class Position$Bias;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI : public ::javax::swing::plaf::TextUI, public ::javax::swing::text::ViewFactory {
	$class(BasicTextUI, 0, ::javax::swing::plaf::TextUI, ::javax::swing::text::ViewFactory)
public:
	BasicTextUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem, int32_t p0, int32_t p1);
	virtual ::javax::swing::ActionMap* createActionMap();
	virtual ::javax::swing::text::Caret* createCaret();
	virtual ::javax::swing::text::Highlighter* createHighlighter();
	virtual ::javax::swing::text::Keymap* createKeymap();
	virtual void damageRange(::javax::swing::text::JTextComponent* tc, int32_t p0, int32_t p1) override;
	virtual void damageRange(::javax::swing::text::JTextComponent* t, int32_t p0, int32_t p1, ::javax::swing::text::Position$Bias* p0Bias, ::javax::swing::text::Position$Bias* p1Bias) override;
	virtual ::javax::swing::ActionMap* getActionMap();
	::javax::swing::text::JTextComponent* getComponent();
	static ::javax::swing::plaf::basic::BasicTextUI$DragListener* getDragListener();
	virtual ::javax::swing::text::EditorKit* getEditorKit(::javax::swing::text::JTextComponent* tc) override;
	virtual ::javax::swing::InputMap* getInputMap();
	virtual $String* getKeymapName();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* t, int32_t pos, ::javax::swing::text::Position$Bias* b, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix() {return nullptr;}
	virtual ::javax::swing::text::View* getRootView(::javax::swing::text::JTextComponent* tc) override;
	virtual $String* getToolTipText(::javax::swing::text::JTextComponent* t, ::java::awt::Point* pt) override;
	virtual ::javax::swing::TransferHandler* getTransferHandler();
	virtual ::java::awt::Rectangle* getVisibleEditorRect();
	virtual void installDefaults();
	void installDefaults2();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void modelChanged();
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* tc, int32_t pos) override;
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* tc, int32_t pos, ::javax::swing::text::Position$Bias* bias) override;
	::java::awt::geom::Rectangle2D* modelToView(::javax::swing::text::JTextComponent* tc, int32_t pos, ::javax::swing::text::Position$Bias* bias, bool useFPAPI);
	virtual ::java::awt::geom::Rectangle2D* modelToView2D(::javax::swing::text::JTextComponent* tc, int32_t pos, ::javax::swing::text::Position$Bias* bias) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBackground(::java::awt::Graphics* g);
	virtual void paintSafely(::java::awt::Graphics* g);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt);
	void setView(::javax::swing::text::View* v);
	virtual $String* toString() override;
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateBackground(::javax::swing::text::JTextComponent* c);
	void updateCursor();
	virtual void updateFocusAcceleratorBinding(bool changed);
	virtual void updateFocusTraversalKeys();
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* tc, ::java::awt::Point* pt) override;
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* tc, ::java::awt::Point* pt, $Array<::javax::swing::text::Position$Bias>* biasReturn) override;
	int32_t viewToModel(::javax::swing::text::JTextComponent* tc, float x, float y, $Array<::javax::swing::text::Position$Bias>* biasReturn);
	virtual int32_t viewToModel2D(::javax::swing::text::JTextComponent* tc, ::java::awt::geom::Point2D* pt, $Array<::javax::swing::text::Position$Bias>* biasReturn) override;
	static const int32_t DEFAULT_CARET_MARGIN = 1;
	static ::javax::swing::plaf::basic::BasicTextUI$BasicCursor* textCursor;
	static ::javax::swing::text::EditorKit* defaultKit;
	::javax::swing::text::JTextComponent* editor = nullptr;
	bool painted = false;
	::javax::swing::plaf::basic::BasicTextUI$RootView* rootView = nullptr;
	::javax::swing::plaf::basic::BasicTextUI$UpdateHandler* updateHandler = nullptr;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
	::javax::swing::plaf::basic::BasicTextUI$DragListener* dragListener = nullptr;
	static $Array<::javax::swing::text::Position$Bias>* discardBias;
	::javax::swing::text::DefaultCaret* dropCaret = nullptr;
	int32_t caretMargin = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEFAULT_CARET_MARGIN")

#endif // _javax_swing_plaf_basic_BasicTextUI_h_