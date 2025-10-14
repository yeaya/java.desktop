#include <java/beans/MetaData$java_awt_Font_PersistenceDelegate.h>

#include <java/awt/Font.h>
#include <java/awt/font/TextAttribute.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BOLD
#undef FAMILY
#undef ITALIC
#undef PLAIN
#undef POSTURE
#undef POSTURE_OBLIQUE
#undef POSTURE_REGULAR
#undef SIZE
#undef WEIGHT
#undef WEIGHT_BOLD
#undef WEIGHT_REGULAR

using $Font = ::java::awt::Font;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_Font_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_Font_PersistenceDelegate::*)()>(&MetaData$java_awt_Font_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_Font_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_Font_PersistenceDelegate", "java.beans.MetaData", "java_awt_Font_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_Font_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_Font_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_Font_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_Font_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_Font_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_Font_PersistenceDelegate));
}

void MetaData$java_awt_Font_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_Font_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_Font_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$var($Font, font, $cast($Font, oldInstance));
	int32_t count = 0;
	$var($String, family, nullptr);
	int32_t style = $Font::PLAIN;
	int32_t size = 12;
	$var($Map, basic, $nc(font)->getAttributes());
	$var($Map, clone, $new($HashMap, $nc(basic)->size()));
	{
		$var($Iterator, i$, $nc($($nc(basic)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TextAttribute, key, $cast($TextAttribute, i$->next()));
			{
				$var($Object, value, basic->get(key));
				if (value != nullptr) {
					clone->put(key, value);
				}
				$init($TextAttribute);
				if (key == $TextAttribute::FAMILY) {
					if ($instanceOf($String, value)) {
						++count;
						$assign(family, $cast($String, value));
					}
				} else {
					if (key == $TextAttribute::WEIGHT) {
						if ($nc($TextAttribute::WEIGHT_REGULAR)->equals(value)) {
							++count;
						} else {
							if ($nc($TextAttribute::WEIGHT_BOLD)->equals(value)) {
								++count;
								style |= $Font::BOLD;
							}
						}
					} else {
						if (key == $TextAttribute::POSTURE) {
							if ($nc($TextAttribute::POSTURE_REGULAR)->equals(value)) {
								++count;
							} else {
								if ($nc($TextAttribute::POSTURE_OBLIQUE)->equals(value)) {
									++count;
									style |= $Font::ITALIC;
								}
							}
						} else {
							if (key == $TextAttribute::SIZE) {
								if ($instanceOf($Number, value)) {
									$var($Number, number, $cast($Number, value));
									size = $nc(number)->intValue();
									if (size == number->floatValue()) {
										++count;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	$Class* type = $of(font)->getClass();
	if (count == clone->size()) {
		return $new($Expression, font, type, "new"_s, $$new($ObjectArray, {
			$of(family),
			$($of($Integer::valueOf(style))),
			$($of($Integer::valueOf(size)))
		}));
	}
	if (type == $Font::class$) {
		return $new($Expression, font, type, "getFont"_s, $$new($ObjectArray, {$of(clone)}));
	}
	return $new($Expression, font, type, "new"_s, $$new($ObjectArray, {$($of($Font::getFont(clone)))}));
}

MetaData$java_awt_Font_PersistenceDelegate::MetaData$java_awt_Font_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Font_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_Font_PersistenceDelegate, name, initialize, &_MetaData$java_awt_Font_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_Font_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_Font_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java