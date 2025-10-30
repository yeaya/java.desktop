#include <DefaultComboBoxModelAddAllElementsTest.h>

#include <DefaultComboBoxModelAddAllElementsTest$MyListDataListener.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/TreeSet.h>
#include <java/util/Vector.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

#undef END
#undef START

using $DefaultComboBoxModelAddAllElementsTest$MyListDataListener = ::DefaultComboBoxModelAddAllElementsTest$MyListDataListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $TreeSet = ::java::util::TreeSet;
using $Vector = ::java::util::Vector;
using $BiConsumer = ::java::util::function::BiConsumer;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $ListDataListener = ::javax::swing::event::ListDataListener;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($Vector));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($Vector, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($Vector, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3 : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($TreeSet));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($TreeSet, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($TreeSet, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6 : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ArrayList));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($ArrayList, inst$)->add($$of(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($ArrayList, inst$)->addAll($cast($Collection, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::*)()>(&DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::class$ = nullptr;

$FieldInfo _DefaultComboBoxModelAddAllElementsTest_FieldInfo_[] = {
	{"START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultComboBoxModelAddAllElementsTest, START)},
	{"END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultComboBoxModelAddAllElementsTest, END)},
	{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, vector)},
	{"set", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, set)},
	{"arrayList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, arrayList)},
	{}
};

$MethodInfo _DefaultComboBoxModelAddAllElementsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest::*)()>(&DefaultComboBoxModelAddAllElementsTest::init$))},
	{"checkAddAll", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DefaultComboBoxModelAddAllElementsTest::checkAddAll))},
	{"checkAddAllWithIndex", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DefaultComboBoxModelAddAllElementsTest::checkAddAllWithIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultComboBoxModelAddAllElementsTest::main))},
	{}
};

$InnerClassInfo _DefaultComboBoxModelAddAllElementsTest_InnerClassesInfo_[] = {
	{"DefaultComboBoxModelAddAllElementsTest$MyListDataListener", "DefaultComboBoxModelAddAllElementsTest", "MyListDataListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultComboBoxModelAddAllElementsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultComboBoxModelAddAllElementsTest",
	"java.lang.Object",
	nullptr,
	_DefaultComboBoxModelAddAllElementsTest_FieldInfo_,
	_DefaultComboBoxModelAddAllElementsTest_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultComboBoxModelAddAllElementsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefaultComboBoxModelAddAllElementsTest$MyListDataListener"
};

$Object* allocate$DefaultComboBoxModelAddAllElementsTest($Class* clazz) {
	return $of($alloc(DefaultComboBoxModelAddAllElementsTest));
}

$Vector* DefaultComboBoxModelAddAllElementsTest::vector = nullptr;
$TreeSet* DefaultComboBoxModelAddAllElementsTest::set = nullptr;
$ArrayList* DefaultComboBoxModelAddAllElementsTest::arrayList = nullptr;

void DefaultComboBoxModelAddAllElementsTest::init$() {
}

void DefaultComboBoxModelAddAllElementsTest::main($StringArray* args) {
	$init(DefaultComboBoxModelAddAllElementsTest);
	checkAddAll();
	checkAddAllWithIndex();
	$nc($System::out)->println("Test case passed."_s);
}

void DefaultComboBoxModelAddAllElementsTest::checkAddAll() {
	$init(DefaultComboBoxModelAddAllElementsTest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultComboBoxModel, cm, $new($DefaultComboBoxModel));
	cm->addListDataListener($$new($DefaultComboBoxModelAddAllElementsTest$MyListDataListener));
	try {
		cm->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultComboBoxModelAddAllElementsTest::arrayList))));
		$nc($System::out)->println($$str({"Successfully added "_s, $$str((DefaultComboBoxModelAddAllElementsTest::END - DefaultComboBoxModelAddAllElementsTest::START)), "elements."_s}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Test case failed. "_s, $(e->getMessage())}));
	}
}

void DefaultComboBoxModelAddAllElementsTest::checkAddAllWithIndex() {
	$init(DefaultComboBoxModelAddAllElementsTest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultComboBoxModel, cm, $new($DefaultComboBoxModel));
	cm->addListDataListener($$new($DefaultComboBoxModelAddAllElementsTest$MyListDataListener));
	cm->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(DefaultComboBoxModelAddAllElementsTest::set))));
	try {
		cm->addAll(DefaultComboBoxModelAddAllElementsTest::START - 1, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultComboBoxModelAddAllElementsTest::vector))));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsbefore the start of the list."_s);
	}
	try {
		cm->addAll(15, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultComboBoxModelAddAllElementsTest::vector))));
		$nc($System::out)->println("Successfully added elements at a particular index"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Unexpected failure: "_s, $(e->getMessage())}));
	}
	try {
		cm->addAll(cm->getSize() + 1, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(DefaultComboBoxModelAddAllElementsTest::vector))));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsafter the end of the list."_s);
	}
}

void clinit$DefaultComboBoxModelAddAllElementsTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector)));
	$var($ObjIntConsumer, var$1, static_cast<$ObjIntConsumer*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1)));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::vector, $cast($Vector, $nc($($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END)))->collect(var$0, var$1, static_cast<$BiConsumer*>($$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2)))));
	$var($Supplier, var$2, static_cast<$Supplier*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3)));
	$var($ObjIntConsumer, var$3, static_cast<$ObjIntConsumer*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4)));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::set, $cast($TreeSet, $nc($($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END)))->collect(var$2, var$3, static_cast<$BiConsumer*>($$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5)))));
	$var($Supplier, var$4, static_cast<$Supplier*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6)));
	$var($ObjIntConsumer, var$5, static_cast<$ObjIntConsumer*>($new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7)));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::arrayList, $cast($ArrayList, $nc($($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END)))->collect(var$4, var$5, static_cast<$BiConsumer*>($$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8)))));
}

DefaultComboBoxModelAddAllElementsTest::DefaultComboBoxModelAddAllElementsTest() {
}

$Class* DefaultComboBoxModelAddAllElementsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::classInfo$.name)) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::load$(name, initialize);
		}
	}
	$loadClass(DefaultComboBoxModelAddAllElementsTest, name, initialize, &_DefaultComboBoxModelAddAllElementsTest_ClassInfo_, clinit$DefaultComboBoxModelAddAllElementsTest, allocate$DefaultComboBoxModelAddAllElementsTest);
	return class$;
}

$Class* DefaultComboBoxModelAddAllElementsTest::class$ = nullptr;