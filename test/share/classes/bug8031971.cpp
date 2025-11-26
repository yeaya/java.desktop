#include <bug8031971.h>

#include <bug8031971$TestTable.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Date.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EDITORS
#undef RENDERERS

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug8031971$TestTable = ::bug8031971$TestTable;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Date = ::java::util::Date;
using $Hashtable = ::java::util::Hashtable;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8031971$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8031971$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031971::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8031971$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8031971$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031971$$Lambda$lambda$main$0::*)()>(&bug8031971$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8031971$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8031971$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8031971$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8031971$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8031971$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug8031971_FieldInfo_[] = {
	{"RENDERERS", "[[Ljava/lang/Object;", nullptr, $STATIC, $staticField(bug8031971, RENDERERS)},
	{"EDITORS", "[[Ljava/lang/Object;", nullptr, $STATIC, $staticField(bug8031971, EDITORS)},
	{}
};

$MethodInfo _bug8031971_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031971::*)()>(&bug8031971::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8031971::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8031971::main)), "java.lang.Exception"},
	{"test", "(Ljava/util/Hashtable;[[Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($Hashtable*,$ObjectArray2*)>(&bug8031971::test))},
	{"test", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,$String*)>(&bug8031971::test))},
	{}
};

$InnerClassInfo _bug8031971_InnerClassesInfo_[] = {
	{"bug8031971$TestTable", "bug8031971", "TestTable", $STATIC},
	{}
};

$ClassInfo _bug8031971_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8031971",
	"java.lang.Object",
	nullptr,
	_bug8031971_FieldInfo_,
	_bug8031971_MethodInfo_,
	nullptr,
	nullptr,
	_bug8031971_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8031971$TestTable"
};

$Object* allocate$bug8031971($Class* clazz) {
	return $of($alloc(bug8031971));
}

$ObjectArray2* bug8031971::RENDERERS = nullptr;
$ObjectArray2* bug8031971::EDITORS = nullptr;

void bug8031971::init$() {
}

void bug8031971::main($StringArray* args) {
	$init(bug8031971);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8031971$$Lambda$lambda$main$0)));
}

void bug8031971::test($Hashtable* table, $ObjectArray2* values) {
	$init(bug8031971);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		test($($nc(table)->get($nc(values->get(i))->get(0))), $cast($String, $nc(values->get(i))->get(1)));
	}
}

void bug8031971::test(Object$* obj, $String* className) {
	$init(bug8031971);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc($of(obj))->getClass()->getCanonicalName()))->equals($($nc(className)->replace(u'$', u'.')))) {
		$throwNew($RuntimeException, "Wrong value!"_s);
	}
}

void bug8031971::lambda$main$0() {
	$init(bug8031971);
	$useLocalCurrentObjectStackCache();
	$var($bug8031971$TestTable, table, $new($bug8031971$TestTable));
	test($(table->getDefaultRenderersByColumnClass()), bug8031971::RENDERERS);
	test($(table->getDefaultEditorsByColumnClass()), bug8031971::EDITORS);
}

void clinit$bug8031971($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Number);
	$load($Float);
	$load($Double);
	$load($Date);
	$load($Icon);
	$load($ImageIcon);
	$load($Boolean);
	$assignStatic(bug8031971::RENDERERS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($Object::class$),
			$of("javax.swing.table.DefaultTableCellRenderer$UIResource"_s)
		}),
		$$new($ObjectArray, {
			$of($Number::class$),
			$of("javax.swing.JTable$NumberRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($Float::class$),
			$of("javax.swing.JTable$DoubleRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($Double::class$),
			$of("javax.swing.JTable$DoubleRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($Date::class$),
			$of("javax.swing.JTable$DateRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($Icon::class$),
			$of("javax.swing.JTable$IconRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($ImageIcon::class$),
			$of("javax.swing.JTable$IconRenderer"_s)
		}),
		$$new($ObjectArray, {
			$of($Boolean::class$),
			$of("javax.swing.JTable$BooleanRenderer"_s)
		})
	}));
	$assignStatic(bug8031971::EDITORS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($Object::class$),
			$of("javax.swing.JTable$GenericEditor"_s)
		}),
		$$new($ObjectArray, {
			$of($Number::class$),
			$of("javax.swing.JTable$NumberEditor"_s)
		}),
		$$new($ObjectArray, {
			$of($Boolean::class$),
			$of("javax.swing.JTable$BooleanEditor"_s)
		})
	}));
}

bug8031971::bug8031971() {
}

$Class* bug8031971::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8031971$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8031971$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug8031971, name, initialize, &_bug8031971_ClassInfo_, clinit$bug8031971, allocate$bug8031971);
	return class$;
}

$Class* bug8031971::class$ = nullptr;