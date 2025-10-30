#include <bug8010718$1$2.h>

#include <bug8010718$1.h>
#include <java/io/File.h>
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

$FieldInfo _bug8010718$1$2_FieldInfo_[] = {
	{"this$0", "Lbug8010718$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8010718$1$2, this$0)},
	{}
};

$MethodInfo _bug8010718$1$2_MethodInfo_[] = {
	{"<init>", "(Lbug8010718$1;)V", nullptr, 0, $method(static_cast<void(bug8010718$1$2::*)($bug8010718$1*)>(&bug8010718$1$2::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8010718$1$2_EnclosingMethodInfo_ = {
	"bug8010718$1",
	"run",
	"()V"
};

$InnerClassInfo _bug8010718$1$2_InnerClassesInfo_[] = {
	{"bug8010718$1", nullptr, nullptr, 0},
	{"bug8010718$1$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8010718$1$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8010718$1$2",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	_bug8010718$1$2_FieldInfo_,
	_bug8010718$1$2_MethodInfo_,
	nullptr,
	&_bug8010718$1$2_EnclosingMethodInfo_,
	_bug8010718$1$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8010718"
};

$Object* allocate$bug8010718$1$2($Class* clazz) {
	return $of($alloc(bug8010718$1$2));
}

void bug8010718$1$2::init$($bug8010718$1* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

bool bug8010718$1$2::accept($File* f) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(f)->isDirectory();
	return var$0 || $($nc($($nc(f)->getName()))->toLowerCase())->endsWith(".txt"_s);
}

$String* bug8010718$1$2::getDescription() {
	return "TXT"_s;
}

bug8010718$1$2::bug8010718$1$2() {
}

$Class* bug8010718$1$2::load$($String* name, bool initialize) {
	$loadClass(bug8010718$1$2, name, initialize, &_bug8010718$1$2_ClassInfo_, allocate$bug8010718$1$2);
	return class$;
}

$Class* bug8010718$1$2::class$ = nullptr;