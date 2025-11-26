#ifndef _javax_swing_UIDefaults$TextAndMnemonicHashMap_h_
#define _javax_swing_UIDefaults$TextAndMnemonicHashMap_h_
//$ class javax.swing.UIDefaults$TextAndMnemonicHashMap
//$ extends java.util.HashMap

#include <java/util/HashMap.h>

#pragma push_macro("AND_MNEMONIC")
#undef AND_MNEMONIC
#pragma push_macro("TEXT_SUFFIX")
#undef TEXT_SUFFIX
#pragma push_macro("TITLE_SUFFIX")
#undef TITLE_SUFFIX

namespace javax {
	namespace swing {

class UIDefaults$TextAndMnemonicHashMap : public ::java::util::HashMap {
	$class(UIDefaults$TextAndMnemonicHashMap, 0, ::java::util::HashMap)
public:
	UIDefaults$TextAndMnemonicHashMap();
	void init$();
	virtual $String* composeKey($String* key, int32_t reduce, $String* sufix);
	virtual $Object* get(Object$* key) override;
	virtual $String* getIndexFromProperty($String* text);
	virtual $String* getMnemonicFromProperty($String* text);
	virtual $String* getTextFromProperty($String* text);
	static $String* AND_MNEMONIC;
	static $String* TITLE_SUFFIX;
	static $String* TEXT_SUFFIX;
};

	} // swing
} // javax

#pragma pop_macro("AND_MNEMONIC")
#pragma pop_macro("TEXT_SUFFIX")
#pragma pop_macro("TITLE_SUFFIX")

#endif // _javax_swing_UIDefaults$TextAndMnemonicHashMap_h_