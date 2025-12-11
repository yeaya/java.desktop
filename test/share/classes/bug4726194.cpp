#include <bug4726194.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BASELINE
#undef EAST
#undef FAIL
#undef HEIGHT
#undef HORIZONTAL_CENTER
#undef NORTH
#undef PLAIN
#undef SOUTH
#undef TEST_DUPLICATES
#undef VERTICAL_CENTER
#undef WEST
#undef WIDTH

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug4726194$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4726194$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4726194::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4726194$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4726194$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4726194$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo bug4726194$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4726194$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&bug4726194$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4726194$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4726194$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4726194$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4726194$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4726194$$Lambda$lambda$main$0::class$ = nullptr;

class bug4726194$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4726194$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4726194::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4726194$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4726194$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4726194$$Lambda$lambda$main$1$1::*)()>(&bug4726194$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4726194$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4726194$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4726194$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4726194$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4726194$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _bug4726194_FieldInfo_[] = {
	{"hConstraints", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, hConstraints)},
	{"vConstraints", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, vConstraints)},
	{"FAIL", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, FAIL)},
	{"TEST_DUPLICATES", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, TEST_DUPLICATES)},
	{}
};

$MethodInfo _bug4726194_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4726194::*)()>(&bug4726194::init$))},
	{"getValues", "(Ljavax/swing/SpringLayout$Constraints;[Ljava/lang/String;)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($SpringLayout$Constraints*,$StringArray*)>(&bug4726194::getValues))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4726194::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4726194::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4726194::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4726194::setLookAndFeel))},
	{"test", "(IZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,bool)>(&bug4726194::test))},
	{"test", "(I[Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,$StringArray*,$List*,$List*)>(&bug4726194::test))},
	{}
};

$ClassInfo _bug4726194_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4726194",
	"java.lang.Object",
	nullptr,
	_bug4726194_FieldInfo_,
	_bug4726194_MethodInfo_
};

$Object* allocate$bug4726194($Class* clazz) {
	return $of($alloc(bug4726194));
}

$StringArray* bug4726194::hConstraints = nullptr;
$StringArray* bug4726194::vConstraints = nullptr;
$ints* bug4726194::FAIL = nullptr;
bool bug4726194::TEST_DUPLICATES = false;

void bug4726194::init$() {
}

void bug4726194::main($StringArray* args) {
	$init(bug4726194);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4726194$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4726194$$Lambda$lambda$main$1$1)));
			}
		}
	}
}

void bug4726194::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(bug4726194);
	$useLocalCurrentObjectStackCache();
	try {
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4726194::test(int32_t level, bool horizontal) {
	$init(bug4726194);
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	$var($StringArray, constraints, horizontal ? bug4726194::hConstraints : bug4726194::vConstraints);
	test(level, constraints, result, $($Arrays::asList($$new($ObjectArray, level))));
	$var($JTextField, tf, $new($JTextField, ""_s));
	tf->setBorder($($BorderFactory::createEmptyBorder()));
	tf->setFont($$new($Font, "Dialog"_s, $Font::PLAIN, 6));
	$nc($System::out)->print("\t\t"_s);
	for (int32_t j = 0; j < $nc(constraints)->length; ++j) {
		$var($String, constraint, constraints->get(j));
		$nc($System::out)->print($$str({constraint, $("                "_s->substring($nc(constraint)->length()))}));
	}
	$nc($System::out)->println(""_s);
	for (int32_t i = 0; i < result->size(); ++i) {
		$var($SpringLayout$Constraints, c, $new($SpringLayout$Constraints, tf));
		$var($List, cc, $cast($List, result->get(i)));
		for (int32_t j = 0; j < $nc(cc)->size(); ++j) {
			$var($String, constraint, $cast($String, cc->get(j)));
			c->setConstraint(constraint, $($Spring::constant((j + 1) * 10)));
		}
		$nc($System::out)->print(" Input:\t\t"_s);
		for (int32_t j = 0; j < $nc(constraints)->length; ++j) {
			$var($String, constraint, constraints->get(j));
			int32_t jj = $nc(cc)->indexOf(constraint);
			$var($String, val, cc->contains(constraint) ? $Integer::toString((jj + 1) * 10) : "?"_s);
			$nc($System::out)->print($$str({val, "\t\t"_s}));
		}
		$nc($System::out)->println(""_s);
		$nc($System::out)->print("Output:\t\t"_s);
		for (int32_t j = 0; j < $nc(constraints)->length; ++j) {
			$var($String, constraint, constraints->get(j));
			$var($Spring, spring, c->getConstraint(constraint));
			$var($String, springVal, (spring == nullptr) ? "?"_s : $Integer::toString($nc(spring)->getValue()));
			$nc($System::out)->print(springVal);
			$nc($System::out)->print("\t\t"_s);
		}
		for (int32_t j = 0; j < $nc(cc)->size(); ++j) {
			$var($String, constraint, $cast($String, cc->get(j)));
			$var($Spring, con, c->getConstraint(constraint));
			if (con == nullptr || $nc(con)->getValue() != (j + 1) * 10) {
				$throwNew($RuntimeException, "Values are wrong!!! "_s);
			}
		}
		if (horizontal) {
			$init($SpringLayout);
			$var($ints, a1, getValues(c, $$new($StringArray, {
				$SpringLayout::WEST,
				$SpringLayout::WIDTH,
				$SpringLayout::EAST
			})));
			if ($nc(a1)->get(0) + a1->get(1) != a1->get(2)) {
				$throwNew($RuntimeException, "WEST + WIDTH != EAST!!! "_s);
			}
			$var($ints, a2, getValues(c, $$new($StringArray, {
				$SpringLayout::WEST,
				$SpringLayout::WIDTH,
				$SpringLayout::HORIZONTAL_CENTER
			})));
			if ($nc(a2)->get(0) + a2->get(1) / 2 != a2->get(2)) {
				$throwNew($RuntimeException, "WEST + WIDTH/2 != HORIZONTAL_CENTER!!! "_s);
			}
		} else {
			$init($SpringLayout);
			$var($ints, a3, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::HEIGHT,
				$SpringLayout::SOUTH
			})));
			if ($nc(a3)->get(0) + a3->get(1) != a3->get(2)) {
				$throwNew($RuntimeException, "NORTH + HEIGHT != SOUTH!!! "_s);
			}
			$var($ints, a4, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::HEIGHT,
				$SpringLayout::VERTICAL_CENTER
			})));
			int32_t vcDiff = $Math::abs($nc(a4)->get(0) + a4->get(1) / 2 - a4->get(2));
			if (vcDiff > 1) {
				$throwNew($RuntimeException, "NORTH + HEIGHT/2 != VERTICAL_CENTER!!! "_s);
			}
			$var($ints, a5, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::BASELINE,
				$SpringLayout::SOUTH
			})));
			if ($nc(a5)->get(0) > a5->get(1) != a5->get(1) > a5->get(2)) {
				$throwNew($RuntimeException, "BASELINE is not in the range: [NORTH, SOUTH]!!!"_s);
			}
		}
		$nc($System::out)->println(""_s);
	}
	$nc($System::out)->println(""_s);
}

$ints* bug4726194::getValues($SpringLayout$Constraints* con, $StringArray* cNames) {
	$init(bug4726194);
	$useLocalCurrentObjectStackCache();
	$var($ints, result, $new($ints, $nc(cNames)->length));
	for (int32_t i = 0; i < cNames->length; ++i) {
		$var($String, name, cNames->get(i));
		$var($Spring, s, $nc(con)->getConstraint(name));
		if (s == nullptr) {
			$nc($System::out)->print($$str({"Warning: "_s, name, " is undefined. "_s}));
			return bug4726194::FAIL;
		}
		result->set(i, $nc(s)->getValue());
	}
	return result;
}

void bug4726194::test(int32_t level, $StringArray* constraints, $List* result, $List* soFar) {
	$init(bug4726194);
	$useLocalCurrentObjectStackCache();
	if (level == 0) {
		$nc(result)->add(soFar);
		return;
	}
	for (int32_t i = 0; i < $nc(constraints)->length; ++i) {
		if ($nc(soFar)->contains(constraints->get(i)) && !bug4726194::TEST_DUPLICATES) {
			continue;
		}
		$var($List, child, $new($ArrayList, static_cast<$Collection*>(soFar)));
		child->set(level - 1, constraints->get(i));
		test(level - 1, constraints, result, child);
	}
}

void bug4726194::lambda$main$1() {
	$init(bug4726194);
	int32_t minLevel = 2;
	int32_t maxLevel = 2;
	for (int32_t i = minLevel; i <= maxLevel; ++i) {
		test(i, true);
		test(i, false);
	}
}

void bug4726194::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(bug4726194);
	setLookAndFeel(laf);
}

void clinit$bug4726194($Class* class$) {
	$init($SpringLayout);
	$assignStatic(bug4726194::hConstraints, $new($StringArray, {
		$SpringLayout::WEST,
		"Width"_s,
		$SpringLayout::EAST,
		$SpringLayout::HORIZONTAL_CENTER
	}));
	$assignStatic(bug4726194::vConstraints, $new($StringArray, {
		$SpringLayout::NORTH,
		"Height"_s,
		$SpringLayout::SOUTH,
		$SpringLayout::VERTICAL_CENTER,
		$SpringLayout::BASELINE
	}));
	$assignStatic(bug4726194::FAIL, $new($ints, 3));
	bug4726194::TEST_DUPLICATES = false;
}

bug4726194::bug4726194() {
}

$Class* bug4726194::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4726194$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4726194$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4726194$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4726194$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug4726194, name, initialize, &_bug4726194_ClassInfo_, clinit$bug4726194, allocate$bug4726194);
	return class$;
}

$Class* bug4726194::class$ = nullptr;