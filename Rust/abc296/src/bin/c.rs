use proconio::input;
use std::collections::HashSet;

fn main() {
    input! {
        n: usize,
        x: i32,
        a: [i32;n],
    }
    let set: HashSet<i32> = a.iter().cloned().collect();
    let mut ans = "No";
    for i in set.iter() {
        if set.contains(&(x + i)) {
            ans = "Yes";
            break;
        }
    }

    println!("{}", ans);
}
