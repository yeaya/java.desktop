#ifndef _javax_swing_text_DefaultCaret_h_
#define _javax_swing_text_DefaultCaret_h_
//$ class javax.swing.text.DefaultCaret
//$ extends java.awt.Rectangle
//$ implements javax.swing.text.Caret,java.awt.event.FocusListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener

#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/text/Caret.h>

#pragma push_macro("ALWAYS_UPDATE")
#undef ALWAYS_UPDATE
#pragma push_macro("H")
#undef H
#pragma push_macro("NEVER_UPDATE")
#undef NEVER_UPDATE
#pragma push_macro("UPDATE_WHEN_ON_EDT")
#undef UPDATE_WHEN_ON_EDT
#pragma push_macro("W")
#undef W
#pragma push_macro("X")
#undef X
#pragma push_macro("Y")
#undef Y

namespace java {
	namespace awt {
		class Graphics;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class ClipboardOwner;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultCaret$Handler;
			class Highlighter$HighlightPainter;
			class JTextComponent;
			class NavigationFilter$FilterBypass;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultCaret : public ::java::awt::Rectangle, public ::javax::swing::text::Caret, public ::java::awt::event::FocusListener, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$class(DefaultCaret, 0, ::java::awt::Rectangle, ::javax::swing::text::Caret, ::java::awt::event::FocusListener, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	DefaultCaret();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Rectangle::contains;
	using ::java::awt::Rectangle::intersects;
	using ::java::awt::Rectangle::add;
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	bool _contains(int32_t X, int32_t Y, int32_t W, int32_t H);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	void adjustCaret(::java::awt::event::MouseEvent* e);
	virtual void adjustCaretAndFocus(::java::awt::event::MouseEvent* e);
	void adjustFocus(bool inWindow);
	virtual void adjustVisibility(::java::awt::Rectangle* nloc);
	virtual void changeCaretPosition(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	virtual void damage(::java::awt::Rectangle* r);
	virtual void deinstall(::javax::swing::text::JTextComponent* c) override;
	void ensureValidPosition();
	virtual bool equals(Object$* obj) override;
	virtual void fireStateChanged();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual int32_t getBlinkRate() override;
	virtual int32_t getCaretWidth(int32_t height);
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	::java::awt::datatransfer::ClipboardOwner* getClipboardOwner();
	::javax::swing::text::JTextComponent* getComponent();
	virtual int32_t getDot() override;
	virtual ::javax::swing::text::Position$Bias* getDotBias();
	::javax::swing::text::NavigationFilter$FilterBypass* getFilterBypass();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual ::java::awt::Point* getMagicCaretPosition() override;
	virtual int32_t getMark() override;
	virtual ::javax::swing::text::Position$Bias* getMarkBias();
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getSelectionPainter();
	::java::awt::datatransfer::Clipboard* getSystemSelection();
	virtual int32_t getUpdatePolicy();
	virtual ::javax::swing::text::Position$Bias* guessBiasForOffset(int32_t offset, ::javax::swing::text::Position$Bias* lastBias, bool lastLTR);
	virtual void handleMoveDot(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	virtual void handleSetDot(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	virtual void install(::javax::swing::text::JTextComponent* c) override;
	virtual bool isActive();
	virtual bool isDotLeftToRight();
	virtual bool isMarkLeftToRight();
	virtual bool isPositionLTR(int32_t position, ::javax::swing::text::Position$Bias* bias);
	virtual bool isSelectionVisible() override;
	virtual bool isVisible() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void moveCaret(::java::awt::event::MouseEvent* e);
	virtual void moveDot(int32_t dot) override;
	virtual void moveDot(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	using ::java::awt::Rectangle::outcode;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void positionCaret(::java::awt::event::MouseEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	void repaint();
	virtual void repaintNewCaret();
	void selectWord(::java::awt::event::MouseEvent* e);
	virtual void setBlinkRate(int32_t rate) override;
	virtual void setDot(int32_t dot) override;
	virtual void setDot(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	using ::java::awt::Rectangle::setFrame;
	virtual void setMagicCaretPosition(::java::awt::Point* p) override;
	using ::java::awt::Rectangle::setRect;
	virtual void setSelectionVisible(bool vis) override;
	virtual void setUpdatePolicy(int32_t policy);
	virtual void setVisible(bool e) override;
	virtual $String* toString() override;
	void updateSystemSelection();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t UPDATE_WHEN_ON_EDT = 0;
	static const int32_t NEVER_UPDATE = 1;
	static const int32_t ALWAYS_UPDATE = 2;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::text::JTextComponent* component = nullptr;
	int32_t updatePolicy = 0;
	bool visible = false;
	bool active = false;
	int32_t dot = 0;
	int32_t mark = 0;
	$Object* selectionTag = nullptr;
	bool selectionVisible = false;
	::javax::swing::Timer* flasher = nullptr;
	::java::awt::Point* magicCaretPosition = nullptr;
	::javax::swing::text::Position$Bias* dotBias = nullptr;
	::javax::swing::text::Position$Bias* markBias = nullptr;
	bool dotLTR = false;
	bool markLTR = false;
	::javax::swing::text::DefaultCaret$Handler* handler = nullptr;
	$ints* flagXPoints = nullptr;
	$ints* flagYPoints = nullptr;
	::javax::swing::text::NavigationFilter$FilterBypass* filterBypass = nullptr;
	static ::javax::swing::Action* selectWord$;
	static ::javax::swing::Action* selectLine;
	bool ownsSelection = false;
	bool forceCaretPositionChange = false;
	bool shouldHandleRelease = false;
	::java::awt::event::MouseEvent* selectedWordEvent = nullptr;
	int32_t caretWidth = 0;
	float aspectRatio = 0.0;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ALWAYS_UPDATE")
#pragma pop_macro("H")
#pragma pop_macro("NEVER_UPDATE")
#pragma pop_macro("UPDATE_WHEN_ON_EDT")
#pragma pop_macro("W")
#pragma pop_macro("X")
#pragma pop_macro("Y")

#endif // _javax_swing_text_DefaultCaret_h_