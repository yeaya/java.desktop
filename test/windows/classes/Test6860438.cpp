#include <Test6860438.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef KEY
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _Test6860438_FieldInfo_[] = {
	{"KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test6860438, KEY)},
	{"VALUE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test6860438, VALUE)},
	{}
};

$MethodInfo _Test6860438_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6860438::*)()>(&Test6860438::init$))},
	{"check", "(Ljava/lang/Object;Ljava/lang/Object;ZI)V", nullptr, 0},
	{"check", "(ZLjava/lang/String;)V", nullptr, 0},
	{"checkEnumeration", "(Ljava/util/Enumeration;Ljava/lang/Object;ZLjava/lang/String;)V", "(Ljava/util/Enumeration<Ljava/lang/Object;>;Ljava/lang/Object;ZLjava/lang/String;)V", 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6860438::main))},
	{"test", "()V", nullptr, 0},
	{}
};

$ClassInfo _Test6860438_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6860438",
	"java.lang.Object",
	nullptr,
	_Test6860438_FieldInfo_,
	_Test6860438_MethodInfo_
};

$Object* allocate$Test6860438($Class* clazz) {
	return $of($alloc(Test6860438));
}

$String* Test6860438::KEY = nullptr;
$String* Test6860438::VALUE = nullptr;

void Test6860438::init$() {
}

void Test6860438::check(Object$* key, Object$* value, bool present, int32_t size) {
	check($equals($UIManager::get(key), value), "UIManager.get()"_s);
	check($nc($($UIManager::getDefaults()))->size() == size, "MultiUIDefaults.size()"_s);
	checkEnumeration($($nc($($UIManager::getDefaults()))->keys()), key, present, "MultiUIDefaults.keys()"_s);
	checkEnumeration($($nc($($UIManager::getDefaults()))->elements()), value, present, "MultiUIDefaults.elements()"_s);
	bool found = false;
	$var($Set, entries, $nc($($UIManager::getDefaults()))->entrySet());
	{
		$var($Iterator, i$, $nc(entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				if ($equals($nc(e)->getKey(), key)) {
					check($equals(e->getValue(), value), "MultiUIDefaults.entrySet()"_s);
					found = true;
				}
			}
		}
	}
	check(found == present, "MultiUIDefaults.entrySet()"_s);
}

void Test6860438::checkEnumeration($Enumeration* e, Object$* elem, bool present, $String* error) {
	bool found = false;
	while ($nc(e)->hasMoreElements()) {
		if ($equals(e->nextElement(), elem)) {
			found = true;
		}
	}
	check(found == present, error);
}

void Test6860438::check(bool condition, $String* methodName) {
	if (!condition) {
		$throwNew($RuntimeException, $$str({methodName, " failed"_s}));
	}
}

void Test6860438::test() {
	int32_t size = $nc($($UIManager::getDefaults()))->size();
	$nc($($UIManager::getLookAndFeelDefaults()))->put(Test6860438::KEY, Test6860438::VALUE);
	check(Test6860438::KEY, Test6860438::VALUE, true, size + 1);
	$UIManager::put(Test6860438::KEY, Test6860438::VALUE);
	check(Test6860438::KEY, Test6860438::VALUE, true, size + 1);
	$nc($($UIManager::getDefaults()))->remove(Test6860438::KEY);
	check(Test6860438::KEY, nullptr, false, size);
}

void Test6860438::main($StringArray* args) {
	$init(Test6860438);
	$$new(Test6860438)->test();
}

Test6860438::Test6860438() {
}

void clinit$Test6860438($Class* class$) {
	$assignStatic(Test6860438::KEY, "Test6860438.key"_s);
	$assignStatic(Test6860438::VALUE, "Test6860438.value"_s);
}

$Class* Test6860438::load$($String* name, bool initialize) {
	$loadClass(Test6860438, name, initialize, &_Test6860438_ClassInfo_, clinit$Test6860438, allocate$Test6860438);
	return class$;
}

$Class* Test6860438::class$ = nullptr;