use im_rc::HashSet;
use proconio::input;

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    let mut set = HashSet::new();

    for i in 0..n {
        if !set.insert(&s[i]).is_some() {
            println!("{}", i + 1);
        }
    }
}
