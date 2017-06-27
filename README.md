## CUDA

; ModuleID = 'test.c'
source_filename = "test.c"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %cha = alloca i8, align 1
  %chb = alloca i8, align 1
  store i32 0, i32* %retval, align 4
  store i8 97, i8* %cha, align 1
  store i8 98, i8* %chb, align 1
  %0 = load i8, i8* %cha, align 1
  %conv = sext i8 %0 to i32
  %1 = load i8, i8* %chb, align 1
  %conv1 = sext i8 %1 to i32
  %cmp = icmp eq i32 %conv, %conv1
  br i1 %cmp, label %if.then, label %if.end

if.then:                                          ; preds = %entry
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  %2 = load i8, i8* %cha, align 1
  %conv3 = sext i8 %2 to i32
  %3 = load i8, i8* %chb, align 1
  %conv4 = sext i8 %3 to i32
  %xor = xor i32 %conv3, %conv4
  %cmp5 = icmp eq i32 %xor, 0
  br i1 %cmp5, label %if.then7, label %if.end8

if.then7:                                         ; preds = %if.end
  br label %if.end8

if.end8:                                          ; preds = %if.then7, %if.end
  ret i32 0
}

attributes #0 = { nounwind uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 4.0.0 (trunk 280809) (llvm/trunk 280808)"}
