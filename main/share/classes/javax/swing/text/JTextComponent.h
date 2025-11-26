#ifndef _javax_swing_text_JTextComponent_h_
#define _javax_swing_text_JTextComponent_h_
//$ class javax.swing.text.JTextComponent
//$ extends javax.swing.JComponent
//$ implements javax.swing.Scrollable,javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>

#pragma push_macro("DEFAULT_KEYMAP")
#undef DEFAULT_KEYMAP
#pragma push_macro("FOCUSED_COMPONENT")
#undef FOCUSED_COMPONENT
#pragma push_macro("FOCUS_ACCELERATOR_KEY")
#undef FOCUS_ACCELERATOR_KEY
#pragma push_macro("KEYMAP_TABLE")
#undef KEYMAP_TABLE
#pragma push_macro("METHOD_OVERRIDDEN")
#undef METHOD_OVERRIDDEN

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache;
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class ComponentOrientation;
		class Dimension;
		class Insets;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
			class InputMethodListener;
			class MouseEvent;
		}
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
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class Printable;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class MessageFormat;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
		class DropMode;
		class TransferHandler$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
			class CaretListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class TextUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class Document;
			class Highlighter;
			class JTextComponent$ComposedTextCaret;
			class JTextComponent$DefaultTransferHandler;
			class JTextComponent$DropLocation;
			class JTextComponent$KeyBinding;
			class JTextComponent$MutableCaretEvent;
			class Keymap;
			class NavigationFilter;
			class Position;
			class SimpleAttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export JTextComponent : public ::javax::swing::JComponent, public ::javax::swing::Scrollable, public ::javax::accessibility::Accessible {
	$class(JTextComponent, 0, ::javax::swing::JComponent, ::javax::swing::Scrollable, ::javax::accessibility::Accessible)
public:
	JTextComponent();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::getToolTipText;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addCaretListener(::javax::swing::event::CaretListener* listener);
	virtual void addInputMethodListener(::java::awt::event::InputMethodListener* l) override;
	static ::javax::swing::text::Keymap* addKeymap($String* nm, ::javax::swing::text::Keymap* parent);
	static void checkDragEnabled(bool b);
	static void checkDropMode(::javax::swing::DropMode* dropMode);
	virtual bool composedTextExists();
	virtual void copy();
	void createComposedTextAttribute(int32_t composedIndex, ::java::text::AttributedCharacterIterator* text);
	virtual void cut();
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::java::awt::Point* p) override;
	void exchangeCaret(::javax::swing::text::Caret* oldCaret, ::javax::swing::text::Caret* newCaret);
	virtual void fireCaretUpdate(::javax::swing::event::CaretEvent* e);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::Action>* getActions();
	virtual ::javax::swing::text::Caret* getCaret();
	virtual ::java::awt::Color* getCaretColor();
	virtual $Array<::javax::swing::event::CaretListener>* getCaretListeners();
	virtual int32_t getCaretPosition();
	int32_t getCurrentEventModifiers();
	virtual ::java::awt::Color* getDisabledTextColor();
	virtual ::javax::swing::text::Document* getDocument();
	virtual bool getDragEnabled();
	::javax::swing::text::JTextComponent$DropLocation* getDropLocation();
	::javax::swing::DropMode* getDropMode();
	virtual char16_t getFocusAccelerator();
	static ::javax::swing::text::JTextComponent* getFocusedComponent();
	virtual ::javax::swing::text::Highlighter* getHighlighter();
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual ::javax::swing::text::Keymap* getKeymap();
	static ::javax::swing::text::Keymap* getKeymap($String* nm);
	static ::java::util::HashMap* getKeymapTable();
	virtual ::java::awt::Insets* getMargin();
	virtual ::javax::swing::text::NavigationFilter* getNavigationFilter();
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	virtual ::java::awt::print::Printable* getPrintable(::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual $String* getSelectedText();
	virtual ::java::awt::Color* getSelectedTextColor();
	virtual ::java::awt::Color* getSelectionColor();
	virtual int32_t getSelectionEnd();
	virtual int32_t getSelectionStart();
	virtual $String* getText(int32_t offs, int32_t len);
	virtual $String* getText();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	void installDefaultTransferHandlerIfNecessary();
	void invokeAction($String* name, ::javax::swing::Action* altAction);
	virtual bool isEditable();
	static void loadKeymap(::javax::swing::text::Keymap* map, $Array<::javax::swing::text::JTextComponent$KeyBinding>* bindings, $Array<::javax::swing::Action>* actions);
	void mapCommittedTextToAction($String* committedText);
	virtual ::java::awt::Rectangle* modelToView(int32_t pos);
	virtual ::java::awt::geom::Rectangle2D* modelToView2D(int32_t pos);
	virtual void moveCaretPosition(int32_t pos);
	virtual $String* paramString() override;
	virtual void paste();
	using ::javax::swing::JComponent::print;
	virtual bool print();
	virtual bool print(::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	virtual bool print(::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat, bool showPrintDialog, ::javax::print::PrintService* service, ::javax::print::attribute::PrintRequestAttributeSet* attributes, bool interactive);
	virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* e) override;
	virtual void read(::java::io::Reader* in, Object$* desc);
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void removeCaretListener(::javax::swing::event::CaretListener* listener);
	static ::javax::swing::text::Keymap* removeKeymap($String* nm);
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::repaint;
	void replaceInputMethodText(::java::awt::event::InputMethodEvent* e);
	virtual void replaceSelection($String* content);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	virtual void restoreComposedText();
	virtual bool saveComposedText(int32_t pos);
	virtual void select(int32_t selectionStart, int32_t selectionEnd);
	virtual void selectAll();
	virtual void setCaret(::javax::swing::text::Caret* c);
	virtual void setCaretColor(::java::awt::Color* c);
	virtual void setCaretPosition(int32_t position);
	virtual void setComponentOrientation(::java::awt::ComponentOrientation* o) override;
	virtual void setDisabledTextColor(::java::awt::Color* c);
	virtual void setDocument(::javax::swing::text::Document* doc);
	virtual void setDragEnabled(bool b);
	virtual $Object* setDropLocation(::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) override;
	void setDropMode(::javax::swing::DropMode* dropMode);
	virtual void setEditable(bool b);
	virtual void setFocusAccelerator(char16_t aKey);
	virtual void setHighlighter(::javax::swing::text::Highlighter* h);
	void setInputMethodCaretPosition(::java::awt::event::InputMethodEvent* e);
	virtual void setKeymap(::javax::swing::text::Keymap* map);
	virtual void setMargin(::java::awt::Insets* m);
	virtual void setNavigationFilter(::javax::swing::text::NavigationFilter* filter);
	virtual void setSelectedTextColor(::java::awt::Color* c);
	virtual void setSelectionColor(::java::awt::Color* c);
	virtual void setSelectionEnd(int32_t selectionEnd);
	virtual void setSelectionStart(int32_t selectionStart);
	virtual void setText($String* t);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::TextUI* ui);
	bool shouldSynthensizeKeyEvents();
	virtual $String* toString() override;
	virtual void updateInputMap(::javax::swing::text::Keymap* oldKm, ::javax::swing::text::Keymap* newKm);
	virtual void updateUI() override;
	virtual int32_t viewToModel(::java::awt::Point* pt);
	virtual int32_t viewToModel2D(::java::awt::geom::Point2D* pt);
	virtual void write(::java::io::Writer* out);
	static $String* FOCUS_ACCELERATOR_KEY;
	::javax::swing::text::Document* model = nullptr;
	::javax::swing::text::Caret* caret = nullptr;
	::javax::swing::text::NavigationFilter* navigationFilter = nullptr;
	::javax::swing::text::Highlighter* highlighter = nullptr;
	::javax::swing::text::Keymap* keymap = nullptr;
	::javax::swing::text::JTextComponent$MutableCaretEvent* caretEvent = nullptr;
	::java::awt::Color* caretColor = nullptr;
	::java::awt::Color* selectionColor = nullptr;
	::java::awt::Color* selectedTextColor = nullptr;
	::java::awt::Color* disabledTextColor = nullptr;
	bool editable = false;
	::java::awt::Insets* margin = nullptr;
	char16_t focusAccelerator = 0;
	bool dragEnabled = false;
	::javax::swing::DropMode* dropMode = nullptr;
	::javax::swing::text::JTextComponent$DropLocation* dropLocation = nullptr;
	static ::javax::swing::text::JTextComponent$DefaultTransferHandler* defaultTransferHandler;
	static ::com::sun::beans::util::Cache* METHOD_OVERRIDDEN;
	static $Object* KEYMAP_TABLE;
	::java::awt::im::InputMethodRequests* inputMethodRequestsHandler = nullptr;
	::javax::swing::text::SimpleAttributeSet* composedTextAttribute = nullptr;
	$String* composedTextContent = nullptr;
	::javax::swing::text::Position* composedTextStart = nullptr;
	::javax::swing::text::Position* composedTextEnd = nullptr;
	::javax::swing::text::Position* latestCommittedTextStart = nullptr;
	::javax::swing::text::Position* latestCommittedTextEnd = nullptr;
	::javax::swing::text::JTextComponent$ComposedTextCaret* composedTextCaret = nullptr;
	::javax::swing::text::Caret* originalCaret = nullptr;
	bool checkedInputOverride = false;
	bool needToSendKeyTypedEvent = false;
	static $Object* FOCUSED_COMPONENT;
	static $String* DEFAULT_KEYMAP;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("DEFAULT_KEYMAP")
#pragma pop_macro("FOCUSED_COMPONENT")
#pragma pop_macro("FOCUS_ACCELERATOR_KEY")
#pragma pop_macro("KEYMAP_TABLE")
#pragma pop_macro("METHOD_OVERRIDDEN")

#endif // _javax_swing_text_JTextComponent_h_