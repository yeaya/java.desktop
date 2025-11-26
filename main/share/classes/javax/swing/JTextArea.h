#ifndef _javax_swing_JTextArea_h_
#define _javax_swing_JTextArea_h_
//$ class javax.swing.JTextArea
//$ extends javax.swing.text.JTextComponent

#include <javax/swing/text/JTextComponent.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class Rectangle;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTextArea : public ::javax::swing::text::JTextComponent {
	$class(JTextArea, 0, ::javax::swing::text::JTextComponent)
public:
	JTextArea();
	using ::javax::swing::text::JTextComponent::getToolTipText;
	using ::javax::swing::text::JTextComponent::contains;
	using ::javax::swing::text::JTextComponent::enable;
	using ::javax::swing::text::JTextComponent::getBounds;
	using ::javax::swing::text::JTextComponent::getSize;
	using ::javax::swing::text::JTextComponent::getLocation;
	using ::javax::swing::text::JTextComponent::firePropertyChange;
	using ::javax::swing::text::JTextComponent::add;
	using ::javax::swing::text::JTextComponent::getMousePosition;
	void init$();
	void init$($String* text);
	void init$(int32_t rows, int32_t columns);
	void init$($String* text, int32_t rows, int32_t columns);
	void init$(::javax::swing::text::Document* doc);
	void init$(::javax::swing::text::Document* doc, $String* text, int32_t rows, int32_t columns);
	virtual void append($String* str);
	virtual ::javax::swing::text::Document* createDefaultModel();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getColumnWidth();
	virtual int32_t getColumns();
	virtual int32_t getLineCount();
	virtual int32_t getLineEndOffset(int32_t line);
	virtual int32_t getLineOfOffset(int32_t offset);
	virtual int32_t getLineStartOffset(int32_t line);
	virtual bool getLineWrap();
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getRowHeight();
	virtual int32_t getRows();
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual int32_t getTabSize();
	virtual $String* getUIClassID() override;
	virtual bool getWrapStyleWord();
	virtual void insert($String* str, int32_t pos);
	using ::javax::swing::text::JTextComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::text::JTextComponent::print;
	using ::javax::swing::text::JTextComponent::repaint;
	using ::javax::swing::text::JTextComponent::remove;
	virtual void replaceRange($String* str, int32_t start, int32_t end);
	using ::javax::swing::text::JTextComponent::requestFocus;
	using ::javax::swing::text::JTextComponent::requestFocusInWindow;
	virtual void setColumns(int32_t columns);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLineWrap(bool wrap);
	virtual void setRows(int32_t rows);
	virtual void setTabSize(int32_t size);
	using ::javax::swing::text::JTextComponent::setUI;
	virtual void setWrapStyleWord(bool word);
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	int32_t rows = 0;
	int32_t columns = 0;
	int32_t columnWidth = 0;
	int32_t rowHeight = 0;
	bool wrap = false;
	bool word = false;
};

	} // swing
} // javax

#endif // _javax_swing_JTextArea_h_