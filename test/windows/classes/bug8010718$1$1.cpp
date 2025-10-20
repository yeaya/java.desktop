#include <bug8010718$1$1.h>

#include <bug8010718$1.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $bug8010718$1 = ::bug8010718$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

$FieldInfo _bug8010718$1$1_FieldInfo_[] = {
	{"this$0", "Lbug8010718$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8010718$1$1, this$0)},
	{}
};

$MethodInfo _bug8010718$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug8010718$1;)V", nullptr, 0, $method(static_cast<void(bug8010718$1$1::*)($bug8010718$1*)>(&bug8010718$1$1::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8010718$1$1_EnclosingMethodInfo_ = {
	"bug8010718$1",
	"run",
	"()V"
};

$InnerClassInfo _bug8010718$1$1_InnerClassesInfo_[] = {
	{"bug8010718$1", nullptr, nullptr, 0},
	{"bug8010718$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8010718$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8010718$1$1",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	_bug8010718$1$1_FieldInfo_,
	_bug8010718$1$1_MethodInfo_,
	nullptr,
	&_bug8010718$1$1_EnclosingMethodInfo_,
	_bug8010718$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8010718"
};

$Object* allocate$bug8010718$1$1($Class* clazz) {
	return $of($alloc(bug8010718$1$1));
}

void bug8010718$1$1::init$($bug8010718$1* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

bool bug8010718$1$1::accept($File* f) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(f)->isDirectory();
	return var$0 || $($nc($($nc(f)->getName()))->toLowerCase())->endsWith(".xml"_s);
}

$String* bug8010718$1$1::getDescription() {
	return "XML"_s;
}

bug8010718$1$1::bug8010718$1$1() {
}

$Class* bug8010718$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8010718$1$1, name, initialize, &_bug8010718$1$1_ClassInfo_, allocate$bug8010718$1$1);
	return class$;
}

$Class* bug8010718$1$1::class$ = nullptr;