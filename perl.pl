use Time::HiRes;

$before = [ Time::HiRes::gettimeofday() ];

open($f, '>', "output.txt") or die "Could not open file";

for (my $x=1; $x < 100001; $x++) {
    print "$x\n";
    print $f "$x\n";
}

close $f;

$elapsed = Time::HiRes::tv_interval($before);

print $elapsed;