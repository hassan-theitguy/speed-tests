use std::time::Instant;
use std::fs::File;
use std::io::Write;

fn main() {

    let before = Instant::now();
    let path = "output.txt";

    let mut f = File::create(path).expect("Unable to create file");

    for x in 1..100001 {
        println!("{}", x);
        f.write_all((x.to_string() + "\n").as_bytes()).expect("Unable to write data");
    }

    println!("Elapsed time: {:.2?}", before.elapsed());
}