#ifndef _javax_swing_text_TabSet_h_
#define _javax_swing_text_TabSet_h_
//$ class javax.swing.text.TabSet
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class TabStop;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import TabSet : public ::java::io::Serializable {
	$class(TabSet, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TabSet();
	void init$($Array<::javax::swing::text::TabStop>* tabs);
	virtual bool equals(Object$* o) override;
	virtual ::javax::swing::text::TabStop* getTab(int32_t index);
	virtual ::javax::swing::text::TabStop* getTabAfter(float location);
	virtual int32_t getTabCount();
	virtual int32_t getTabIndex(::javax::swing::text::TabStop* tab);
	virtual int32_t getTabIndexAfter(float location);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$Array<::javax::swing::text::TabStop>* tabs = nullptr;
	int32_t hashCode$ = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TabSet_h_