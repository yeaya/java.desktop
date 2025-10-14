#ifndef _java_awt_TextArea_h_
#define _java_awt_TextArea_h_
//$ class java.awt.TextArea
//$ extends java.awt.TextComponent

#include <java/awt/TextComponent.h>

#pragma push_macro("SCROLLBARS_BOTH")
#undef SCROLLBARS_BOTH
#pragma push_macro("SCROLLBARS_HORIZONTAL_ONLY")
#undef SCROLLBARS_HORIZONTAL_ONLY
#pragma push_macro("SCROLLBARS_NONE")
#undef SCROLLBARS_NONE
#pragma push_macro("SCROLLBARS_VERTICAL_ONLY")
#undef SCROLLBARS_VERTICAL_ONLY

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export TextArea : public ::java::awt::TextComponent {
	$class(TextArea, 0, ::java::awt::TextComponent)
public:
	TextArea();
	void init$();
	void init$($String* text);
	void init$(int32_t rows, int32_t columns);
	void init$($String* text, int32_t rows, int32_t columns);
	void init$($String* text, int32_t rows, int32_t columns, int32_t scrollbars);
	virtual void addNotify() override;
	virtual void append($String* str);
	virtual void appendText($String* str);
	virtual $String* constructComponentName() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getColumns();
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows, int32_t columns);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows, int32_t columns);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getRows();
	virtual int32_t getScrollbarVisibility();
	static void initIDs();
	virtual void insert($String* str, int32_t pos);
	virtual void insertText($String* str, int32_t pos);
	virtual ::java::awt::Dimension* minimumSize(int32_t rows, int32_t columns);
	virtual ::java::awt::Dimension* minimumSize() override;
	virtual $String* paramString() override;
	virtual ::java::awt::Dimension* preferredSize(int32_t rows, int32_t columns);
	virtual ::java::awt::Dimension* preferredSize() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void replaceRange($String* str, int32_t start, int32_t end);
	virtual void replaceText($String* str, int32_t start, int32_t end);
	virtual void setColumns(int32_t columns);
	virtual void setRows(int32_t rows);
	int32_t rows = 0;
	int32_t columns = 0;
	static $String* base;
	static int32_t nameCounter;
	static const int32_t SCROLLBARS_BOTH = 0;
	static const int32_t SCROLLBARS_VERTICAL_ONLY = 1;
	static const int32_t SCROLLBARS_HORIZONTAL_ONLY = 2;
	static const int32_t SCROLLBARS_NONE = 3;
	int32_t scrollbarVisibility = 0;
	static ::java::util::Set* forwardTraversalKeys;
	static ::java::util::Set* backwardTraversalKeys;
	static const int64_t serialVersionUID = (int64_t)0x333DB1DE0443FE6A;
	int32_t textAreaSerializedDataVersion = 0;
};

	} // awt
} // java

#pragma pop_macro("SCROLLBARS_BOTH")
#pragma pop_macro("SCROLLBARS_HORIZONTAL_ONLY")
#pragma pop_macro("SCROLLBARS_NONE")
#pragma pop_macro("SCROLLBARS_VERTICAL_ONLY")

#endif // _java_awt_TextArea_h_