#include <javax/swing/UIDefaults$TextAndMnemonicHashMap.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef AND_MNEMONIC
#undef TEXT_SUFFIX
#undef TITLE_SUFFIX

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

$FieldInfo _UIDefaults$TextAndMnemonicHashMap_FieldInfo_[] = {
	{"AND_MNEMONIC", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, AND_MNEMONIC)},
	{"TITLE_SUFFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, TITLE_SUFFIX)},
	{"TEXT_SUFFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, TEXT_SUFFIX)},
	{}
};

$MethodInfo _UIDefaults$TextAndMnemonicHashMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UIDefaults$TextAndMnemonicHashMap::*)()>(&UIDefaults$TextAndMnemonicHashMap::init$))},
	{"composeKey", "(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getIndexFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getMnemonicFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getTextFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _UIDefaults$TextAndMnemonicHashMap_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$TextAndMnemonicHashMap", "javax.swing.UIDefaults", "TextAndMnemonicHashMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UIDefaults$TextAndMnemonicHashMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIDefaults$TextAndMnemonicHashMap",
	"java.util.HashMap",
	nullptr,
	_UIDefaults$TextAndMnemonicHashMap_FieldInfo_,
	_UIDefaults$TextAndMnemonicHashMap_MethodInfo_,
	"Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;",
	nullptr,
	_UIDefaults$TextAndMnemonicHashMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$TextAndMnemonicHashMap($Class* clazz) {
	return $of($alloc(UIDefaults$TextAndMnemonicHashMap));
}

$String* UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC = nullptr;
$String* UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX = nullptr;
$String* UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX = nullptr;

void UIDefaults$TextAndMnemonicHashMap::init$() {
	$HashMap::init$();
}

$Object* UIDefaults$TextAndMnemonicHashMap::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $HashMap::get(key));
	if (value == nullptr) {
		bool checkTitle = false;
		$var($String, stringKey, $nc($of(key))->toString());
		$var($String, compositeKey, nullptr);
		if ($nc(stringKey)->endsWith(UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC)) {
			return $of(nullptr);
		}
		if ($nc(stringKey)->endsWith(".mnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 9, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("NameMnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 12, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Mnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
			checkTitle = true;
		}
		if (compositeKey != nullptr) {
			$assign(value, $HashMap::get(compositeKey));
			if (value == nullptr && checkTitle) {
				$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
				$assign(value, $HashMap::get(compositeKey));
			}
			return $of(value == nullptr ? ($Object*)nullptr : $of(getMnemonicFromProperty($($nc($of(value))->toString()))));
		}
		if ($nc(stringKey)->endsWith("NameText"_s)) {
			$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith(".nameText"_s)) {
			$assign(compositeKey, composeKey(stringKey, 9, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Text"_s)) {
			$assign(compositeKey, composeKey(stringKey, 4, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Title"_s)) {
			$assign(compositeKey, composeKey(stringKey, 5, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
		}
		if (compositeKey != nullptr) {
			$assign(value, $HashMap::get(compositeKey));
			return $of(value == nullptr ? ($Object*)nullptr : $of(getTextFromProperty($($nc($of(value))->toString()))));
		}
		if ($nc(stringKey)->endsWith("DisplayedMnemonicIndex"_s)) {
			$assign(compositeKey, composeKey(stringKey, 22, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
			$assign(value, $HashMap::get(compositeKey));
			if (value == nullptr) {
				$assign(compositeKey, composeKey(stringKey, 22, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
				$assign(value, $HashMap::get(compositeKey));
			}
			return $of(value == nullptr ? ($Object*)nullptr : $of(getIndexFromProperty($($nc($of(value))->toString()))));
		}
	}
	return $of(value);
}

$String* UIDefaults$TextAndMnemonicHashMap::composeKey($String* key, int32_t reduce, $String* sufix) {
	return $str({$($nc(key)->substring(0, key->length() - reduce)), sufix});
}

$String* UIDefaults$TextAndMnemonicHashMap::getTextFromProperty($String* text) {
	return $nc(text)->replace(static_cast<$CharSequence*>("&"_s), static_cast<$CharSequence*>(""_s));
}

$String* UIDefaults$TextAndMnemonicHashMap::getMnemonicFromProperty($String* text) {
	int32_t index = $nc(text)->indexOf((int32_t)u'&');
	if (0 <= index && index < text->length() - 1) {
		char16_t c = text->charAt(index + 1);
		return $Integer::toString((int32_t)$Character::toUpperCase(c));
	}
	return nullptr;
}

$String* UIDefaults$TextAndMnemonicHashMap::getIndexFromProperty($String* text) {
	int32_t index = $nc(text)->indexOf((int32_t)u'&');
	return (index == -1) ? ($String*)nullptr : $Integer::toString(index);
}

UIDefaults$TextAndMnemonicHashMap::UIDefaults$TextAndMnemonicHashMap() {
}

void clinit$UIDefaults$TextAndMnemonicHashMap($Class* class$) {
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC, "AndMnemonic"_s);
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX, ".titleAndMnemonic"_s);
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX, ".textAndMnemonic"_s);
}

$Class* UIDefaults$TextAndMnemonicHashMap::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$TextAndMnemonicHashMap, name, initialize, &_UIDefaults$TextAndMnemonicHashMap_ClassInfo_, clinit$UIDefaults$TextAndMnemonicHashMap, allocate$UIDefaults$TextAndMnemonicHashMap);
	return class$;
}

$Class* UIDefaults$TextAndMnemonicHashMap::class$ = nullptr;

	} // swing
} // javax