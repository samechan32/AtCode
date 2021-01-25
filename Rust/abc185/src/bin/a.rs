fn main() {
    proconio::input! {
        a:[usize;4],
    }

    println!("{}", a.iter().min().unwrap());
}
